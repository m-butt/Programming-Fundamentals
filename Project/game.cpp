//============================================================================
// Name        : Muhammad
// Author      : Hassan Mustafa
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Dodge 'Em...
//============================================================================

#ifndef DODGE_CPP_
#define DODGE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<cmath> // for basic math functions such as cos, sin, sqrt
#include<ctime>
using namespace std;
float x = 356; //I declare x and y globaly so in change in x y can be seen by every function 
float y = 620; // so by changing it on function it can be change in every function 
float arrfx1[2][8];//Used diifrent arrays for each column so i can easly eat the food 
float arrfx2[2][8];
float arrfx3[2][8];
float arrfx4[2][8];
float arrfx5[2][8];
float arrfx6[2][8];
float arrfx7[2][8];
float arrfx8[2][8];
float arrfx9[2][8]; 
float arrfx10[2][8];
float arrfx11[2][8];
float arrfx12[2][8];
float arrfx13[2][8];
float arrfx14[2][8];
float arrfx15[2][8];
float arrfx16[2][8];
float opx=420;// Starting x cordinate of opponent
float opy=64;//starting y cordinate of opponent
/*Used diffrent variable to hold the condition for display i use 0 1 to 
change the conditions of display as show below*/
int game_menu=1,game_arena =0,game_guide =0,game_pause=0,life=3,iscore=0,j=1,speed,game_highscore=0;
string scores,Life;
/*here i used immortality function which act reciprocaly first
its true so life will be - but when 7 is presed the condtion will be false and life
will not - */
bool level=false,immortality=true;
int levels=1;
string Level;
int recp=2;/*I made a refrence for AI bot it will check in whihc rectangle we are and switch its possotions accordinlgy in start player is in 2 rectangle so here it is initialize with */



/*these all are function prototypes
funcion are defined after main function*/
void Drawarena();
void menu(); 
void cars();
void guide();
void foodlogic();
void food();
void carmovements();
void levela();
void highscore();
void Stringdisplay();
void ending();




//Function to  draw convax that is calledin main
void SetCanvasSize(int width, int height){
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); 
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();}
        

//display function to display every thing on convax 	
void GameDisplay(){

	glClearColor(0,0,0.0,0); 
	glClear (GL_COLOR_BUFFER_BIT); 
	/*as i mentioned above here i used 0 1 to switch on and off the codiotns*/
	if(game_menu)
        menu();//functioncall

	if(game_guide)
        guide();

	if (game_highscore)
        highscore();//function call

	 
        if (levels==3 || life==0)
         ending(); 

	if(game_arena==1 && game_menu==0){
       
     	/*its a varibale that use to increase the speed when space is pressed it become 2 and after that when display function call it self 		again it become 1 so it will be 2 untill the space is being pressed*/
	 speed=1;


	
	/*function calls*/	
	cars();

	Drawarena();

	food();

	Stringdisplay();

        if (iscore==64*j)
        levela();}
      
       

	glutSwapBuffers();}

void NonPrintableKeys(int key, int x1, int y2) {


	/*Here i give ranges for which player can jump and by jumping the rectangle will change and Boot will decide its path */


	if (key== GLUT_KEY_LEFT){
        if      ((y>=354 && y<=442) && x>700)             {x-=90;recp=2;}
        else if ((y>=354 && y<=442) && ( x<700 && x>594)) {x-=80;recp=3;}
        else if ((y>=354 && y<=442) && ( x<594 && x>521)) {x-=74;recp=4;}
	else if ((y>=354 && y<=442) && ( x>299 && x<463)) {x-=80;recp=3;}
        else if ((y>=354 && y<=442) && ( x>220 && x<299)) {x-=78;recp=2;}
        else if ((y>=354 && y<=442) && (x>123  && x<220)) {x-=96;recp=1;}}
		
        else if (key== GLUT_KEY_RIGHT){
	if      ((y>=354 && y<=442) && x<122)            {x+=96;recp=2;}
        else if ((y>=354 && y<=442) && (x>122 && x<215)) {x+=78;recp=3;}
        else if ((y>=354 && y<=442) && (x>215 && x<320)) {x+=80;recp=4;}
	else if ((y>=354 && y<=442) && (x>460 && x<524)) {x+=74;recp=3;}
        else if ((y>=354 && y<=442) && (x<593 && x>524)) {x+=80;recp=2;}
        else if ((y>=354 && y<=442) && (x<700 && x>524)) {x+=90;recp=1;}}
        	
	else if (key== GLUT_KEY_UP){
        if      ((x<=419 && x>=366) && (y>=64 && y<=116)) {y+=78;recp=2;}
        else if ((x<=419 && x>=366) && (y>=116&& y<=200)) {y+=74;recp=3;}
	else if ((x<=419 && x>=366) && (y>=200&& y<=280)) {y+=76;recp=4;}
        else if ((x<=419 && x>=366) && (y>=469&& y<=522)) {y+=72;recp=3;}
        else if ((x<=419 && x>=366) && (y>=522&& y<=603)) {y+=78;recp=2;}
        else if ((x<=419 && x>=366) && (y>=603&& y<=672)) {y+=74;recp=1;}}
           
        else if (key== GLUT_KEY_DOWN){
        if      ((x<=419 && x>=366) && (y<700 && y>=693)) {y-=74;recp=2;}
        else if ((x<=419 && x>=366) && (y<693 && y>=620)) {y-=78;recp=3;}
        else if ((x<=419 && x>=366) && (y<620 && y>=541)) {y-=72;recp=4;}
	else if ((x<=419 && x>=366) && (y>=218&& y<=292)) {y-=76;recp=3;}
        else if ((x<=419 && x>=366) && (y>143 && y<=216)) {y-=74;recp=2;}
        else if ((x<=419 && x>=366) && (y>=64 && y<=143)) {y-=78;recp=1;}}
       


	glutPostRedisplay();

}
void PrintableKeys(unsigned char key, int x, int y) {
	
	if (key == 27){
	exit(1);}//use to exit
        
   
	if (key == '1'){//for game start
        game_menu=0;
        game_arena=1;
        game_pause=0;}

	if (key == '2'){//for guide
        game_guide=1;
        game_menu=0;
        game_arena=0;}
       
        if(key == '3' )//for pause
	game_pause= 1;
        
	

	if(key == '4'){
	life = 3, iscore = 0,game_arena=1,game_menu=0,x=356,y=620,opy=64,opx=420;
        levela();
        levels=1;
	}
	if(key == '5'){//for highscore
	game_highscore=1;
        game_menu = 0;
        game_arena = 0;
	game_guide = 0;}
 
	if (key == '0'){//to come back in mai menu and reset 
        game_menu=1;
        game_arena=0;
        game_guide=0;
        life=3;
	iscore=0;
        game_highscore=0;
        levela();
	levels=1;}
	
        if (key == 32)
        speed=2;//to increase speed as i explained above
        
        
        if (key == '7'){///use to gain unlimited lives
        immortality=false;
        game_menu=0;
        game_arena=1;}
        
	
	glutPostRedisplay();
}


void Timer(int m) {
         carmovements();//function call 
       glutTimerFunc(10/2, Timer, 0);
       glutPostRedisplay();
}


void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {

	glutPostRedisplay();
}


void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
	
	
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	foodlogic();//function call
	int width = 840, height = 840; 
	InitRandomizer(); 
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); 
	glutInitWindowPosition(50, 50); 
	glutInitWindowSize(width, height); 
	glutCreateWindow("OOP Centipede"); 
	SetCanvasSize(width, height);
	glutDisplayFunc(GameDisplay);
	glutSpecialFunc(NonPrintableKeys); 
	glutKeyboardFunc(PrintableKeys); 
	glutTimerFunc(1000.0, Timer, 0);
	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); 
	glutMotionFunc(MousePressedAndMoved); 

	
	glutMainLoop();
	return 1;
}


/*Function to draw arena*/
void Drawarena(){
        // Outer 
       
	int gap_turn = 100;
	int sx = 55;
	int sy = 45;
	int swidth = 700/2 - gap_turn/2; 
	int sheight = 10;
	float *scolor = colors[LAWN_GREEN];
	DrawRectangle(sx, sy, swidth+5, sheight, scolor); 
	DrawRectangle(sx+5 + swidth + gap_turn, sy, swidth+5, sheight, scolor); 
	DrawRectangle(5+sx+swidth*2+gap_turn, sy+sheight, sheight*2, swidth-5, scolor); 
	DrawRectangle(5+sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn-5, sheight*2, swidth+5, scolor); 
	DrawRectangle(sx+5 + swidth + gap_turn, sy+710, swidth+5, sheight, scolor); 
	DrawRectangle(sx, sy+710, swidth+5, sheight, scolor); 
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn-5, sheight*2, swidth+5, scolor); 
	DrawRectangle(sx-sheight*2, sy+sheight, sheight*2, swidth-5, scolor); 
	

        // Inner 1
	gap_turn = 100;
	sx = 140;
	sy = 120;
	swidth = 540/2 - gap_turn/2; 
	sheight = 10;
	scolor = colors[DARK_SLATE_GRAY];
	DrawRectangle(sx, sy, swidth, sheight, scolor); 
	DrawRectangle(sx + swidth + gap_turn, sy, swidth, sheight, scolor); 
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight, sheight*2, swidth, scolor); 
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); 
	DrawRectangle(sx + swidth + gap_turn, sy+550, swidth, sheight, scolor); 
	DrawRectangle(sx, sy+550, swidth, sheight, scolor); 
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor);
	DrawRectangle(sx-sheight*2, sy+sheight, sheight*2, swidth, scolor); 
	
	//Inner 2
 	gap_turn = 100;
	sx = 235;
	sy = 215;
	swidth = 350/2 - gap_turn/2; 
	sheight = 10;
	scolor = colors[DARK_RED];
	DrawRectangle(sx, sy-18, swidth, sheight, scolor);
	DrawRectangle(sx + swidth + gap_turn, sy-18, swidth, sheight, scolor); 
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight-18, sheight*2, swidth+18, scolor); 
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn, sheight*2, swidth+18, scolor); 
	DrawRectangle(sx + swidth + gap_turn, sy+365+18, swidth, sheight, scolor);
	DrawRectangle(sx, sy+365+18, swidth, sheight, scolor); 
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn, sheight*2, swidth+18, scolor); 
	DrawRectangle(sx-sheight*2, sy+sheight-18, sheight*2, swidth+18, scolor); 
	
	//Inner 3
	gap_turn = 100;
	sx = 313;
	sy = 293;
	swidth = 200/2 - gap_turn/2; 
	sheight = 10;
	scolor = colors[DARK_MAGENTA];
	DrawRectangle(sx, sy-18, swidth, sheight, scolor); 
	DrawRectangle(sx + swidth + gap_turn, sy-18, swidth, sheight, scolor); 
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight-18, sheight*2, swidth+18, scolor); 
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn, sheight*2, swidth+18, scolor); 
	DrawRectangle(sx + swidth + gap_turn, sy+210+18, swidth, sheight, scolor); 
	DrawRectangle(sx, sy+210+18, swidth, sheight, scolor); 
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn, sheight*2, swidth+18, scolor); 
	DrawRectangle(sx-sheight*2, sy+sheight-18, sheight*2, swidth+18, scolor);
	
        //Inner 4
	gap_turn = 10;
	sx =368 ;
	sy =340 ;
	swidth = 200/2 - gap_turn/2; 
	sheight = 10;
	scolor = colors[DARK_MAGENTA];
	DrawRectangle(sx, sy+10, swidth, sheight, scolor); 
	DrawRectangle(sx,sy+sheight, sheight, swidth, scolor); 
	DrawRectangle(sx+swidth-10,sy+sheight, sheight, swidth, scolor); 
	DrawRectangle(sx, sy+swidth, swidth, sheight, scolor);
	
	//Circle in the middile	
	DrawCircle(414,398,30,colors[DARK_MAGENTA]);}





/*function to display menu*/
void menu(){
        glClearColor(1.0,1.0,1.0, 0); 
	glClear (GL_COLOR_BUFFER_BIT);

	DrawString(200,550,"Press-1-TO START THE GAME",colors[BLUE]);
	DrawString(200,500,"Press-2-TO PRINT THE GAME-GUIDE",colors[BLUE]);
	DrawString(200,450,"Press-3-TO PAUSE THE GAME",colors[BLUE]);
	DrawString(200,400,"Press-4-TO RESET THE GAME",colors[BLUE]);
	DrawString(200,350,"Press-5-TO PRINT THE HIGH SCORES",colors[BLUE]);
	DrawString(200,300,"Press-6-TO EXIT THE GAME",colors[BLUE]);
	DrawString(200,250,"Press-7-TO CHEAT ",colors[BLUE]);}


/*function to display cars*/
void cars(){
        //Drawing player car
	float width = 9; 
	float height = 9;
	float* color = colors[WHITE]; 
	float radius = 5.0;
	DrawRoundRect(x,y,width,height,color,radius); 
	DrawRoundRect(x+width*3,y,width,height,color,radius); 
	DrawRoundRect(x+width*3,y+height*4,width,height,color,radius); 
	DrawRoundRect(x,y+height*4,width,height,color,radius);
	DrawRoundRect(x, y+height*2, width, height, color, radius/2); 
	DrawRoundRect(x+width, y+height, width*2, height*3, color, radius/2); 
	DrawRoundRect(x+width*3, y+height*2, width, height, color, radius/2); 
	cout<<opx<<"           "<<opy<<endl;
	//opp car
        float* scolor=colors[RED];
	float opwidth = 9; 
	float opheight = 9; 
	float opradius = 5.0;
	DrawRoundRect(opx,opy,opwidth,opheight,scolor,opradius); 
	DrawRoundRect(opx+opwidth*3,opy,opwidth,opheight,scolor,opradius); 
	DrawRoundRect(opx+opwidth*3,opy+opheight*4,opwidth,opheight,scolor,opradius); 
	DrawRoundRect(opx,opy+opheight*4,opwidth,opheight,scolor,opradius); 
	DrawRoundRect(opx, opy+opheight*2, opwidth, opheight, scolor,opradius/2); 
	DrawRoundRect(opx+opwidth, opy+opheight, opwidth*2, opheight*3, scolor, opradius/2); 
	DrawRoundRect(opx+opwidth*3, opy+opheight*2,opwidth,opheight, scolor, opradius/2);}



/*function to open guide*/
void guide(){
	glClearColor(1.0,1.0,1.0,0); 
	glClear (GL_COLOR_BUFFER_BIT); 

	DrawString(10,550,"Your car will move in clock wise direction automatically",colors[BLUE]);
	DrawString(10,500,"Computer car will move opposite to your direction and you have to avoid collision",colors[BLUE]);
	DrawString(10,450,"You can use your l r u d arrow keys to change your box but only where there is place",colors[BLUE]);
	DrawString(10,400,"You have been given only 3 lives",colors[BLUE]);
	DrawString(10,350,"To complete you have to clear 2 levels",colors[BLUE]);
	DrawString(10,300,"By pressing 7 you will be immortal",colors[BLUE]);
        DrawString(10,200,"Best of luck folks!",colors[BLUE]);
        DrawString(10,250,"Press 3 to pasuse and press 1 to come back",colors[BLUE]);
	DrawString(10,150,"Press 0 to go back",colors[BLUE]);}




/*function to initialize the food*/
void foodlogic(){
	   //Food's logic

           /* here i make total 16 arrays 8 are used in every cycle meanwhle rest 8 are permenet after every level the food is tranfer from permanent array to the temporary one you can get the idea in next function */


           for(int  j = 0;j<8; j++)
	   {arrfx1[0][j] = 84;arrfx9[0][j] = 84;//storing x cordinates
           arrfx1[1][j] = 90 + (j*75);arrfx9[1][j] = 90 + (j*75);//here the formula is to make constant jumps in y-axis
	   if(j > 3){// used for a jump in middle
           arrfx1[1][j] += 100;arrfx9[1][j] += 100;}}

/* note; i divided food in each column so my x-axis are same for one array that can help me to detect food and remove it easily*/

           /*same goes with the rest loops*/

           for(int  j = 0;j<8; j++)
	   {arrfx2[0][j] = 180;arrfx10[0][j] = 180;
	   arrfx2[1][j] = 90 + (j*75);arrfx10[1][j] = 90 + (j*75);
           if(j > 3){
	   arrfx2[1][j] += 100;arrfx10[1][j] += 100;}}

       	   for(int  j = 0 ;j<8; j++)
	   {arrfx3[0][j] = 260;arrfx11[0][j] = 260;
	   arrfx3[1][j] = 90 + (j*75);arrfx11[1][j] = 90 + (j*75);
	   if(j > 3){
           arrfx3[1][j] += 100;arrfx11[1][j] += 100;}}

       	   for(int  j = 0 ;j<8; j++)
	   {arrfx4[0][j] = 340;arrfx12[0][j] = 340;
           arrfx4[1][j] = 90 + (j*75);arrfx12[1][j] = 90 + (j*75);
           if(j > 3){
	   arrfx4[1][j] += 100;arrfx12[1][j] += 100;}}

       	   for(int  j = 0 ;j<8; j++)
	   {arrfx5[0][j] = 480;arrfx13[0][j] = 480;
	   arrfx5[1][j] = 90 + (j*75);arrfx13[1][j] = 90 + (j*75);
	   if(j > 3){
	   arrfx5[1][j] += 100;arrfx13[1][j] += 100;}}
       	
           for(int  j =0;j<8; j++)
	   {arrfx6[0][j] = 560;arrfx14[0][j] = 560;
	   arrfx6[1][j] = 90 + (j*75);arrfx14[1][j] = 90 + (j*75);
	   if(j > 3){
	   arrfx6[1][j] += 100;arrfx14[1][j] += 100;}}
       	
  
       	   for(int  j = 0;j<8; j++)
	   {arrfx7[0][j] = 640;arrfx15[0][j] = 640;
	   arrfx7[1][j] =90+(j*75);arrfx15[1][j] = 90 + (j*75);
	   if(j > 3){
	   arrfx7[1][j] += 100;arrfx15[1][j] += 100;}}

	   for(int  j = 0;j<8; j++)
	   {arrfx8[0][j] = 730;arrfx16[0][j] = 730;
	   arrfx8[1][j] = 90 + (j*75);arrfx16[1][j] = 90 + (j*75);
	   if(j > 3){
	   arrfx8[1][j] += 100;arrfx16[1][j] += 100;}}}



//function to remove food/detectfood
void food(){
  

	/*her i used this condition if ((x<=arrfx1[0][j] && x+36>=arrfx1[0][j]) && (y<=arrfx1[1][j] && (y+36)>=arrfx1[1][j]))
        i gave range of my car so when the car touches from any where to food it disappear i changed that specifix index value so the that 
        perticular food went out from the convax */

 
	for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx1[0][j] && x+36>=arrfx1[0][j]) && (y<=arrfx1[1][j] && (y+36)>=arrfx1[1][j]))
     	    {arrfx1[0][j]=5000;iscore=iscore+1;}//here im chanign the specific xaxis value 
	DrawCircle(arrfx1[0][j],arrfx1[1][j],5,colors[RED]);}

        /*above mentioned statements are true for every loop in this function */


        for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx2[0][j] && x+36>=arrfx2[0][j]) && (y<=arrfx2[1][j] && (y+36)>=arrfx2[1][j]))
     	    {arrfx2[0][j]=5000;iscore=iscore+1;}
  	DrawCircle(arrfx2[0][j],arrfx2[1][j],5,colors[RED]);}
   
        for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx3[0][j] && x+36>=arrfx3[0][j]) && (y<=arrfx3[1][j] && (y+36)>=arrfx3[1][j]))
     	    {arrfx3[0][j]=5000;iscore=iscore+1;}
        DrawCircle(arrfx3[0][j],arrfx3[1][j],5,colors[RED]);}
        
        for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx4[0][j] && x+36>=arrfx4[0][j]) && (y<=arrfx4[1][j] && (y+36)>=arrfx4[1][j]))
     	    {arrfx4[0][j]=5000;iscore=iscore+1;}
	DrawCircle(arrfx4[0][j],arrfx4[1][j],5,colors[RED]);}
    
	for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx5[0][j] && x+36>=arrfx5[0][j]) && (y<=arrfx5[1][j] && (y+36)>=arrfx5[1][j]))
     	    {arrfx5[0][j]=5000;iscore=iscore+1;}
	DrawCircle(arrfx5[0][j],arrfx5[1][j],5,colors[RED]);}
	    
        for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx6[0][j] && x+36>=arrfx6[0][j]) && (y<=arrfx6[1][j] && (y+36)>=arrfx6[1][j]))
     	    {arrfx6[0][j]=5000;iscore=iscore+1;}
	DrawCircle(arrfx6[0][j],arrfx6[1][j],5,colors[RED]);}
	    
        for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx7[0][j] && x+36>=arrfx7[0][j]) && (y<=arrfx7[1][j] && (y+36)>=arrfx7[1][j]))
     	    {arrfx7[0][j]=5000;iscore=iscore+1;}
        DrawCircle(arrfx7[0][j],arrfx7[1][j],5,colors[RED]);}
	    
       
        for (int j=0 ;j<8 ;j++)
        {if ((x<=arrfx8[0][j] && x+36>=arrfx8[0][j]) && (y<=arrfx8[1][j] && (y+36)>=arrfx8[1][j]))
     	   {arrfx8[0][j]=5000;iscore=iscore+1;}
        DrawCircle(arrfx8[0][j],arrfx8[1][j],5,colors[RED]);}}


//functio to move the cars
void carmovements(){
//Player movement


        /*here i gave ranges in which automatically the cars can move*/

       /*here as you can see speed varibale which is increase by 2 when space bar is pressed and after release it become 1 so it wont effect speed afterwards*/

        if(!game_pause){
        if ((y==64 && x>66) || ((x>162 && x<640) && y==142) || (( x>241 && x<543) && y==216) || ((x>321 && x<=469) &&y==292)){x-=2*speed;
	if ((x<=opx && x+36>=opx) && (y<=opy && (y+36)>=opy)){
        x=356;
        y=620;
        opx=420;
        opy = 64;
	if (immortality){

/*this function as i mentioned above initialy is true but after 7 is pressed if become fasle and life-- will not execute and playes get unlimited lives*/
       
	 life--;
        recp=2;}}}//here i again tell the AI bot that the player location is now in second rectangle 

        //same conditions for rest of the players movements


        if ((x==66 && y<693) || (x==162 && (y<620 && y>100)) || (x==240 && (y>210 && y<=541)) || (x==320 && (y>=292 && y<469))){y+=2*speed;
 	if ((x<=opx && x+36>=opx) && (y<=opy && (y+36)>=opy)){
        x=356;
        y=620;
        opx=420;
        opy = 64;
        if (immortality){
        life--;
        recp=2;}}}
	
     
        if ((x<712 && y==694) || ((x<621 && x>=162) && y==620) || (y==542 && (x>=240 && x<541)) || ((x<468 && x>=320) && y==470)){x+=2*speed;
	if ((x<=opx && x+36>=opx) && (y<=opy && (y+36)>=opy)){
         x=356;
        y=620;
        opx=420;
        opy = 64;
        if (immortality){
        life--;
        recp=2;}}}
         
        if ((x==712 && y>64) || (x==622 && (y>143 && y<=620)) || (x==542 && (y<558 && y>216)) || (x==468 && (y<=470 && y>292))){y-=2*speed;
	if ((x<=opx && x+36>=opx) && (y<=opy && (y+36)>=opy)){
         x=356;
        y=620;
        opx=420;
        opy = 64;
 	if (immortality){
        life--;
        if (level==1)
        recp=2;}}}
	
	//here i gives ranges same as i gave above for player
   
	if (((opy==64 || opy==63) && opx<712) || ((opx<621 && opx>=162) &&   (opy==142 || opy==141)) || (( opx>=240 && opx<541) && (opy==216 || opy==217)) || 		((opx>=310  		&& opx<468) &&(opy==292 || opy==291))){
        opx=opx+2;
	//here im swtching th bot positon accroding to the player rposotion 
        if ((opx<=419 && opx>=366) && recp==2 )
	opy=142;
        if ((opx<=419 && opx>=366) && recp==3 )
        opy=217;
        if ((opx<=419 && opx>=366) && recp==4 )
        opy=292;
        if ((opx<=419 && opx>=366) && recp==1 ) 
        opy=64;}
        
        
	if (((opx==66 && opy>64)) || (opx==162 && (opy<=620 && opy>142)) || (opx==240 && (opy>217 && opy<=543)) || (opx==314 && (opy>292   	   &&opy<=470))){
        opy=opy-2;
        //as from left right bot can come in level 2 so i put a condition on it so after level 1 bot can come through sides
        if (levels>=2){
        if ((opy>=347 && opy<=388) && recp==2 )
        opx=162;
        if ((opy>=347 && opy<=388) && recp==3 )
        opx=240;
        if ((opy>=347 && opy<=388) && recp==4 )
        opx=314;
        if ((opy>=335 && opy<=442) && recp==1 )
        opx=66;         
	}}
       

        //every thing same as mentioned above in this function 
 
        if ((opx>66 && opy==694) || ((opx>162 && opx<=622) && (opy==620 || opy==621)) || ((opy==542 || opy==543) && (opx>241 && opx<584))   		||((opx<475 &&opx>314) &&opy==470)){
        opx=opx-2;
	if ((opx<=419 && opx>=366) && recp==2 )
        opy=620;
        if ((opx<=419 && opx>=366) && recp==3 )
        opy=543;
  	if ((opx<=419 && opx>=366) && recp==4 ) 
        opy=470;
       	if ((opx<=419 && opx>=366) && recp==1 )
        opy=694;}
       
        
	if ((opx==712 && opy<693) || (opx==622 && (opy>=142 && opy<620)) || (opx==542 && (opy<543 && opy>210)) || (opx==468 && (opy<=469 &&  	     opy>=292))){
        opy=opy+2;
        if (levels>=2){
 	if ((opy>=347 && opy<=388) && recp==2 )
        opx=622;
        if ((opy>=347 && opy<=388) && recp==3 )
        opx=542;
        if ((opy>=347 && opy<=388) && recp==4 )
        opx=468;
        if ((opy>=347 && opy<=442) && recp==1 )
        opx=712;}}}}
        
	



//function to display integer values on convax
void Stringdisplay(){

	/*In this i make objects to convert my integer values to string so i can use it in draw function */

	stringstream ss;//creating object
	ss<<iscore;//wrtting
	scores=ss.str();//assigning
	DrawString(100,800,scores,colors[BLUE]);//using
        DrawString(30,800,"scores",colors[BLUE]);
        

	stringstream ff;//creatig object
	ff<<life;//writting
	Life=ff.str();//assigning
	DrawString(750,800,Life,colors[BLUE]);//using
	DrawString(700,800,"Life",colors[BLUE]);

	stringstream dd;//creating object
	dd<<levels;//writting
	Level=dd.str();//assigning
        DrawString(400,750,Level,colors[RED]);//using
	DrawString(378,800,"Level",colors[BLUE]);}



//function to refill the array to diaplay food for the next level
void levela(){
/* after every level  player will start from it original posotion */
	x = 356; 
	y = 620;
	opx=420;
	opy=64;
	levels++;//counter for level 
        j++;//j is used to make multiples of 64
    
	//here the parement array is used to fill the temporary array again its like refillig
        for (int j=0 ;j<8 ;j++){
        arrfx1[0][j]=arrfx9[0][j];
        arrfx1[1][j]=arrfx9[1][j];
        arrfx2[0][j]=arrfx10[0][j];
	arrfx2[1][j]=arrfx10[1][j];
        arrfx3[0][j]=arrfx11[0][j];
	arrfx3[1][j]=arrfx11[1][j];
        arrfx4[0][j]=arrfx12[0][j];
        arrfx4[1][j]=arrfx12[1][j];
        arrfx5[0][j]=arrfx13[0][j];
        arrfx5[1][j]=arrfx13[1][j];
        arrfx6[0][j]=arrfx14[0][j];
        arrfx6[1][j]=arrfx14[1][j];
        arrfx7[0][j]=arrfx15[0][j];
        arrfx7[1][j]=arrfx15[1][j];
        arrfx8[0][j]=arrfx16[0][j];
        arrfx8[1][j]=arrfx16[1][j];}}



//function to display end results and to store the values in file
void ending(){
	game_menu=0;
	game_arena=0;
	glClearColor(1.0,1.0,1.0,0); 
        glClear (GL_COLOR_BUFFER_BIT); 
        if(life==0){
        DrawString(320,800,"GAME OVER",colors[BLUE]);
        DrawString(300,400,"Press 0 to continue",colors[BLUE]);}
        if (levels==3)
 	DrawString(100,400,"CONGRATULATIONS YOU HAVE DONE A GREAT JOB",colors[BLUE]);
	//Open HighScore File

	fstream highScores("hscr.txt", fstream::in | fstream::out);

	int highScoreArray[10];	//highscore array to read into and write from
	if (!highScores.fail()) // only work if the file was opened properly
	{
	for (int i = 0; i < 10; i++)
	highScores >> highScoreArray[i]; // get all highscores into array using loop
	if (iscore > highScoreArray[0]) // if current highscore is greater than the previous, reset array
	{
	for (int i = 9; i > 0; i--)
	highScoreArray[i] = highScoreArray[i - 1]; // shift array back
	highScoreArray[0] = iscore; // set new highscore
	highScores.clear(); // clear end of file flag as it was reached here
	highScores.seekp(fstream::beg); // move write or put pointer to start of file

	if (!highScores.fail()) // work only if file is opened
	for (int i = 0; i < 10; i++)
	{
	highScores << (highScoreArray[i]) << "\n"; // copy new list of highscores into file
	}}}
	highScores.close();}
        




//function to display highscore by reading it from file
void highscore()
{
	string highss;
	game_menu=0;
	game_arena=0;
	glClearColor(1.0,1.0,1.0,0); 
	glClear (GL_COLOR_BUFFER_BIT); 
        DrawString(380,800,"HIGH SCORES",colors[BLUE]);
        //Open HighScore File

	fstream highScores("hscr.txt", fstream::in | fstream::out);

	int highScoreArray[10];	//highscore array to read into and write from
	if (!highScores.fail()) // only work if the file was opened properly
	{
		for (int i = 0; i < 10; i++)
			highScores >> highScoreArray[i]; // get all highscores into array using loop
	}
        for (int i=0,q=0;i<10;i++){
	highScores.close();
 	stringstream hs;
	hs<<highScoreArray[i];	
	highss=hs.str();
	DrawString(410,700-q,highss,colors[BLUE]);
        q=q+50;//use to control the output over y axis
       }
         DrawString(410,50,"PRESS 0 TO GO BACK",colors[BLUE]);
        
             
}

#endif /* AsteroidS_CPP_ */


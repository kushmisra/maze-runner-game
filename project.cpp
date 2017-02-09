#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

#include<string.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
 int x=0,y=0;
 int userlevel=1;
 int k=0;
 char *arr;
int scan;
int i=0,c;
int j=0;
int score=0;
char ch;
int sc;
int helisize,handsize;
void* heliimage,*handimage;










void hand()
   {
   setcolor(BLACK);
   setlinestyle(0,1,3);
   setfillstyle(1,8);
   bar(14,197,19,215);
   line(19,198,23,198);
   line(22,200,29,192);
   line(29,192,38,192);
   line(37,192,37,197);
   line(32,197,54,197);
   line(54,197,54,202);
   line(32,202,54,202);
   line(32,207,42,207);
   line(32,212,42,212);
   line(42,212,42,202);
   line(38,212,38,217);
   line(38,217,14,217);
   handsize= imagesize(14,190,56,220);


   /* allocate memory to hold the image */
   handimage= malloc(handsize);
   /* grab the image */
   getimage(14,190, 56,220, handimage);
//   cleardevice();
   }






void rules(){

    cleardevice();
    setcolor(RED);

    outtextxy(10,10,"RULES OF THE GAME");
    settextstyle(1,0,4);
    outtextxy(10,50," this is a maze runner where you need  ");
    outtextxy(10,70,"to run from the starting to end point");
    outtextxy(10,90,"avaoiding to hit the walls of the maze  ");
    outtextxy(10,110," and u need to eat the fruit in the ");
    outtextxy(10,130," way avaoiding to hit the walls of the");
    outtextxy(10,150,"   maze and u need to eat the fruit in   ");
    outtextxy(10,170,"  the in the way as u keep on eating the  ");

    outtextxy(10,190," fruit the score keeps on increasing and u ");
    outtextxy(10,210,"  need atleast 17 score to pass to next level ");

    outtextxy(10,250," ENJOY THE GAME !!!!  ");




    getch();

}

void level(){

    cleardevice();
    setcolor(RED);

    outtextxy(10,10,"LEVELS OF TEH GAME");
    settextstyle(1,0,4);
    outtextxy(10,50," there are two levels in the game  ");
    outtextxy(10,70," level 1");
    outtextxy(10,90," in the first level you need to cross ");
    outtextxy(10,110," the maze carefully avaoiding any  ");
    outtextxy(10,130," hitting to the wall and eat the fruit");
    outtextxy(10,150,"  to build your score atleast 17 ");
    outtextxy(10,170," level 2  ");

    outtextxy(10,190," in addition to the 1st level now you ");
    outtextxy(10,210," will have enemy in the path...tackle them ");

    outtextxy(10,250," ENJOY THE GAME !!!! :) :) ");




    getch();


}
void displaytopscore(){
}
void player2(int i=0,int a=0)
{

  ;

}
void drawMaze()
{  setcolor(3);

	line(50,19+50,400-19,19+50);
	line(50,50+2*19,50+2*19,50+2*19);
	line(50+2*19,50+2*19,50+2*19,400);
	line(50+2*19,400-6*19,50+3*19,400-6*19);
	line(50+2*19,400-8*19,50+3*19,400-8*19);
	line(50+2*19,400-5*19,50+4*19,400-5*19);
	line(50+3*19,50+19,50+3*19,50+5*19);
	line(50+4*19,50+2*19,50+4*19,400-19*6);
	line(50+3*19,225-3*19,50+3*19,225);
	line(50+3*19,400-7*19,50+4*19,400-7*19);
	line(50+3*19,400-4*19,50+3*19,400-19);
	line(50+4*19,400,50+4*19,400-3*19);
	line(50+3*19,400-4*19,50+5*19,400-4*19);
	line(50+2*19,400,400-2*19,400);
	line(400-1*19,400,400-1*19,50+2*19);//end line right most
	line(400-2*19,50+2*19,400-2*19,50+7*19);
	line(400-4*19,225-2*19,400-2*19,225-2*19);
	line(400-4*19,50+4*19,400-4*19,400-19);
	line(400-4*19,400-19,400-2*19,400-19);
	line(400-2*19,400-19,400-2*19,400-2*19);
	line(400-2*19,400-2*19,400-3*19,400-2*19);
	line(400-3*19,400-2*19,400-3*19,400-3*19);
	line(400-19,400,400-2*19,400);
	line(400-19,400-3*19,400-3*19,400-3*19);
	line(400-4*19,400-4*19,400-2*19,400-4*19);
	line(400-2*19,400-4*19,400-2*19,400-5*19);
	line(400-2*19,400-5*19,400-3*19,400-5*19);
	line(400-2*19,400-6*19,400-3*19,400-6*19);
	line(400-2*19,400-7*19,400-3*19,400-7*19);
	for(k=8;k<11;k++)
	line(400-2*19,400-k*19,400-3*19,400-k*19);
	line(400-3*19,225-19,400-3*19,225+19);
	line(400-3*19,225+2*19,400-3*19,225+3*19);
	line(400-3*19,50+4*19,400-3*19,50+6*19);
	line(400-3*19,50+2*19,400-3*19,50+3*19);
	line(400-4*19,50+19,400-4*19,50+2*19);
	line(400-4*19,50+2*19,400-3*19,50+2*19);
	line(400-2*19,400-7*19,400-2*19,400-8*19);
	line(400-2*19,225,400-2*19,225-19);
	line(50+5*19,50+2*19,255-19,50+2*19);
	line(50+5*19,50+2*19,50+5*19,50+4*19);
	line(225-19,50+3*19,225-3*19,50+3*19);
	line(225,50+2*19,225,225+3*19);
	line(225,225+4*19,225,400);
	line(225-19,50+5*19,225-19,225+19);
	line(225-19,225+2*19,225-19,225+3*19);
	line(225-19,225+4*19,225-19,400);
	line(225,50+5*19,225+19,50+5*19);
	line(225+19,225-2*19,225+19,225);
	line(225+19,225+2*19,225+19,225+3*19);
	line(225+19,225+4*19,225+19,400-19);
	line(225+2*19,400,225+2*19,400-6*19);
	line(225+3*19,400,225+3*19,400-6*19);
	line(225+4*19,400-19,225+4*19,400-7*19);
	line(225+19,400-7*19,225+4*19,400-7*19);
	line(225+19,225,225+4*19,225);
	line(225+4*19,225,225+4*19,225-2*19);
	line(225+4*19,225-3*19,225+4*19,225-5*19);
	line(225+4*19,50+3*19,225+4*19,50+3*19);
	line(50+5*19,400-2*19,50+5*19,400-6*19);
	line(50+4*19,400-6*19,225-19,400-6*19);
	line(225-3*19,400-19,225-3*19,400-2*19);
	line(225-2*19,400-19,225-2*19,400-3*19);
	line(225-3*19,400-2*19,225-2*19,400-2*19);
	line(225-3*19,400-3*19,225-2*19,400-3*19);
	line(225-3*19,400-4*19,225-19,400-4*19);
	line(225-3*19,400-5*19,225-2*19,400-5*19);
	line(225-4*19,225+2*19,225-2*19,225+2*19);
	line(225-4*19,225+19,225-19,225+19);
	line(225-4*19,225,225-2*19,225);
	line(50+5*19,50+4*19,225,50+4*19);
	line(225-3*19,400-4*19,225-3*19,400-5*19);
	line(50+5*19,225-2*19,50+5*19,225-19);
	line(50+5*19,225,50+5*19,225-4*19);
	line(50+6*19,225-19,50+6*19,225-5*19);
	line(225-2*19,225,225-2*19,225-4*19);
	line(225+19,50+2*19,225+3*19,50+2*19);
	line(225+2*19,50+2*19,225+2*19,50+6+19);
	line(225+19,50+4*19,225+2*19,50+4*19);
	line(225+2*19,225-19,225+3*19,225-19);
	line(225+2*19,225-19,225+2*19,225-2*19);
	line(225+19,400-6*19,225+2*19,400-6*19);
	line(225+3*19,50+4*19,225+3*19,50+5*19);
	line(400-5*19,50+2*19,400-5*19,50+3*19);
	line(400-5*19,50+3*19,400-4*19,50+3*19);
	line(225+2*19,50+2*19,225+2*19,50+6*19);
	line(225+2*19,225-3*19,225+4*19,225-3*19);
	line(50+5*19,400-2*19,50+6*19,400-2*19);
	line(225+19,225+19,225+4*19,225+19);
	line(400-19,225-19,400-2*19,225-19);

	setcolor(9);

	circle(60,19+50+9,2);
	circle(100,295,2);
	circle(250,75,2);
	circle(240,295,2);

}


int fruit(int x,int y)
{

    if((  58<x && x<62  )&&(  75<y && y<80  ))
	return sc+1;
    if((  98<x && x<102  )&&(  293<y && y<298  ))
	return sc+1;
     if((  248<x && x<252  )&&(  73<y && y<77  ))
	return sc+1;

     if((  238<x && x<242  )&&(  293<y && y<297  ))
	return sc+1;

}


void player(int x,int y)
{
setcolor(10);
circle(50+x,19+50+9+y,4);

}
void playere(int x,int y)
{
setcolor(YELLOW);
circle(50+x,19+50+9+y,4);

}


void enemy(int x,int y)
{
    setcolor(3);
    circle(x,y,4);


}

void enemye(int x,int y)
{

    setcolor(YELLOW);
    circle(x,y,4);
}

void gover()
{


    setcolor(1);


		  settextstyle(4,0,8);


		  outtextxy(50,180,"GAME OVER");


		  for(int c=1,j=10;j<=32000;j++)


		  {


		putpixel(random(j),random(j),8);


		if(j==32000){j=0;c++;}


		if(c>=30)break;


		  }

		 char ch=getch();



}


void game(){



 if(userlevel==1)
 {
 cleardevice();
 setbkcolor(YELLOW);



 setcolor(BLACK);
 bar(450,0,470,700);
 setcolor(4);

 outtextxy(460,60," LEVEL1 ");
 outtextxy(460,100,"SCORE");




 drawMaze();
 int temp;
  ch=getch();
 while(ch!=27){

	delay(50);


     if(kbhit())
     ch=getch();


        fflush(stdin);

     if(ch=='a')
     {
     if(getpixel(50+x-1-6,19+50+9+y)==3)
      {

      x=0;
      y=0;

      //cleardevice() ;
      gover();
      return;

      }
     playere(x,y);
     player(x-1,y);
     x--;
     }

     if(ch=='s')
     {
     if(getpixel(50+x,19+50+9+y+1+6)==3)
      {
      x=0;
      y=0;
      //cleardevice() ;
      gover();
      return;
     }
     playere(x,y);
     player(x,y+1);
     y++;
}


     if(ch=='d')
     {
     if(getpixel(50+x+1+6,19+50+9+y)==3)
      {

      cleardevice() ;
      x=0;
      y=0;
      gover();
      return;
     }
     playere(x,y);
     player(x+1,y);
     x++;
     }

     if(ch=='w')
     {
     if(getpixel(50+x,19+50+9+y-1-6)==3)
      {
      x=0;
      y=0;
      //cleardevice() ;
      gover();
      return;
      }
     playere(x,y);
     player(x,y-1);
     y-- ;
     }

     temp=sc;

     if(getpixel(50+x+7,19+50+9+y)==9)
      sc++;
     if(getpixel(50+x,19+50+9+y+7)==9)
      sc++;
     if(getpixel(50+x-7,19+50+9+y)==9)
      sc++;
     if(getpixel(50+x,19+50+9+y-7)==9)
      sc++;

     itoa(sc,arr,10);
    // arr[0]=a;
    // arr[1]='\0';
     if(temp!=sc)
     {
     setcolor(14);
     itoa(temp,arr,10);
     outtextxy(500,150,arr);
     setcolor(4);
     itoa(sc,arr,10);
     outtextxy(500,150,arr);
     temp=sc;
     }

	if(((50+x)>375)&&((50+x)<400)&&((y+50+19+9)>50)&&((y+50+19+9)<100))
       {
      	if(sc>=17)
	   {
	    cleardevice();
	    setbkcolor(YELLOW);
	    outtextxy(300,300,"LEVEL COMPLETE");
	    delay(3000);
	    userlevel++;
	    break;
	   }
	   else
       {
           gover();


       }

       }
}



 getch();


}



if(userlevel==2)
{

    sc=0;
    x=0;
    y=0;
   cleardevice();
 setbkcolor(YELLOW);



 setcolor(BLACK);
 bar(450,0,470,700);
 setcolor(4);

 outtextxy(460,60," LEVEL2");
 outtextxy(460,100,"SCORE");

 drawMaze();

 int tx1=97,ty1=100;
 int tx2=234,ty2=155;
 int dir1=0,dir2=0;
 enemy(tx1,ty1);
 enemy(tx2,ty2);

 int temp;
  ch=getch();
 while(ch!=27){



     if(dir1==0)
     {
	 if(ty1<200)
	 {
	     enemye(tx1,ty1);
	     ty1++;
	     enemy(tx1,ty1);
	 }

	 else
	 {

	     dir1=1;
	 }

     }

     if(dir1==1)
     {
	 if(ty1>90)
	 {
	     enemye(tx1,ty1);
	     ty1--;
	     enemy(tx1,ty1);
	 }

	 else
	 {

	     dir1=0;
	 }

     }



     if(dir2==0)
     {
	 if(ty2<260)
	 {
	     enemye(tx2,ty2);
	     ty2++;
	     enemy(tx2,ty2);
	 }

	 else
	 {

	     dir2=1;
	 }

     }

     if(dir2==1)
     {
	 if(ty2>155)
	 {
	     enemye(tx2,ty2);
	     ty2--;
	     enemy(tx2,ty2);
	 }

	 else
	 {

	     dir2=0;
	 }

     }


     if(kbhit())
     ch=getch();


	fflush(stdin);

     if(ch=='a')
     {
     if(getpixel(50+x-1-6,19+50+9+y)==3)
      {
      x=0;
      y=0;

      //cleardevice() ;
      gover();
      return;
     }
     playere(x,y);
     player(x-1,y);
     x--;
     }

     if(ch=='s')
     {
     if(getpixel(50+x,19+50+9+y+1+6)==3)
      {
      x=0;
      y=0;
      //cleardevice() ;
      gover();
      return;
     }
     playere(x,y);
     player(x,y+1);
     y++;
}


     if(ch=='d')
     {
     if(getpixel(50+x+1+6,19+50+9+y)==3)
      {

      //cleardevice() ;

      x=0;
      y=0;
      gover();
      return;
     }
     playere(x,y);
     player(x+1,y);
     x++;
     }

     if(ch=='w')
     {
     if(getpixel(50+x,19+50+9+y-1-6)==3)
      {
      x=0;
      y=0;
      //cleardevice() ;

      gover();
      return;
      }
     playere(x,y);
     player(x,y-1);
     y-- ;
     }

     temp=sc;

     if(getpixel(50+x+7,19+50+9+y)==9)
      sc++;
     if(getpixel(50+x,19+50+9+y+7)==9)
      sc++;
     if(getpixel(50+x-7,19+50+9+y)==9)
      sc++;
     if(getpixel(50+x,19+50+9+y-7)==9)
      sc++;

     itoa(sc,arr,10);
    // arr[0]=a;
    // arr[1]='\0';
     if(temp!=sc)
     {
     setcolor(14);
     itoa(temp,arr,10);
     outtextxy(500,150,arr);
     setcolor(4);
     itoa(sc,arr,10);
     outtextxy(500,150,arr);
     temp=sc;
     }

	if(((50+x)>375)&&((50+x)<400)&&((y+50+19+9)>50)&&((y+50+19+9)<100))
       {
      	if(sc>=17)
	   {
	    cleardevice();
	    setbkcolor(YELLOW);
	    outtextxy(300,300,"LEVEL COMPLETE");
	    delay(3000);
	    userlevel++;
	    break;
	   }
	   else
       {
           gover();

       }

       }

}




}




        cleardevice();
	    setbkcolor(YELLOW);
	    outtextxy(300,300,"GAME COMPLETE");
	    outtextxy(200,200,"sorry more levels to come soon :)");
	    delay(3000);
	    userlevel++;





}



void main()
{
int gdriver=DETECT,gmode;



initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");



  hand();

  man:
while(1)


	{


	    cleardevice();


	    setcolor(WHITE);


	    c=1;


	    setbkcolor(2);


	    setlinestyle(2,1,3);


	    rectangle(4,4,635,475);


	    setlinestyle(0,1,3);


	    rectangle(0,0,640,480);


	    setlinestyle(0,1,3);



	    setcolor(9);


	    setfillstyle(1,9);

	    setcolor(14);


	    settextstyle(4,0,6);


	    outtextxy(190,40,"MAZE RUNNER");


	    line(322,58,322,73);


	    settextstyle(0,0,3);


	    putimage(130,175,handimage,OR_PUT);


	    setcolor(4);


	    outtextxy(180,180,"PLAY THE GAME....");


	    setcolor(14);


	    outtextxy(180,230,"INSTRUCTIONS....");


	    outtextxy(180,280,"HIGH SCORES....");


	    outtextxy(180,330,"LEVELS....");


	    outtextxy(180,380,"EXIT....");


	    //gethighscores();


	    ch=getch();


	    if(ch==27)   //esc


	      exit(0);


	     if(ch==13)


	      game();





	    else if((ch=='s')&&(c==1))


	    {


	     b:        setcolor(14);


		   setfillstyle(0,2);


		   bar(120,160,173,430);


		   putimage(130,175,handimage,OR_PUT);


		   settextstyle(0,0,3);


		   outtextxy(180,230,"INSTRUCTIONS....");


		   outtextxy(180,280,"HIGH SCORES....");


		   outtextxy(180,330,"LEVELS....");


		   outtextxy(180,380,"EXIT....");


		   setcolor(4);


		   outtextxy(180,180,"PLAY THE GAME....");


		   c++;


		   score=0;


		   ch=getch();


		   if(ch==13)  { game(),score=0; goto man;}


		   if(ch=='w') { c=5; goto g;}


		   else if((ch=='s')&&(c==2))


		   {


	     d:            setcolor(14);


		   setfillstyle(0,2);


		   bar(120,160,173,430);


		   putimage(130,225,handimage,OR_PUT);


		   settextstyle(0,0,3);


		   outtextxy(180,180,"PLAY THE GAME....");


		   outtextxy(180,280,"HIGH SCORES....");


		   outtextxy(180,330,"LEVELS....");


		   outtextxy(180,380,"EXIT....");


		   setcolor(4);


		   outtextxy(180,230,"INSTRUCTIONS....");


		   c++;


		   ch=getch();


		   if(ch==13) rules();


		   else if(ch=='w'){c-=2; goto b;}


		   if((ch=='s')&&(c==3))


		   {


	     e:              setcolor(14);


		     setfillstyle(0,2);


		     bar(120,160,173,430);


		     putimage(130,275,handimage,OR_PUT);


		     settextstyle(0,0,3);


		     outtextxy(180,180,"PLAY THE GAME....");


		     outtextxy(180,230,"INSTRUCTIONS....");


		     outtextxy(180,330,"LEVELS....");


		     outtextxy(180,380,"EXIT....");


		     setcolor(4);


		     outtextxy(180,280,"HIGH SCORES....");


		     c++;


		     ch=getch();


		     if(ch==13) displaytopscore();


		      if(ch=='w') { c-=2; goto d;}


		     if((ch=='s')&&(c==4))


		     {


	     f:              setcolor(14);


		     setfillstyle(0,2);


		     bar(120,160,173,430);


		     putimage(130,325,handimage,OR_PUT);


		     settextstyle(0,0,3);


		     outtextxy(180,180,"PLAY THE GAME....");


		     outtextxy(180,230,"INSTRUCTIONS....");

		    outtextxy(180,280,"HIGH SCORES....");
		     outtextxy(180,380,"EXIT....");
		     setcolor(4);
		     outtextxy(180,330,"LEVELS....");
		    c++;
		     ch=getch();
		     if(ch==13) level();
		     else if(ch=='w') { c-=2; goto e;}
		    else if((ch=='s')&&(c==5))
		     {
	     g:          setcolor(14);
		     setfillstyle(0,2);
		     bar(120,160,173,430);
		     putimage(130,375,handimage,OR_PUT);
		     settextstyle(0,0,3);
		     outtextxy(180,180,"PLAY THE GAME....");
		     outtextxy(180,230,"INSTRUCTIONS....");
		     outtextxy(180,280,"HIGH SCORES....");
		     outtextxy(180,330,"LEVELS....");
		     setcolor(4);
		     outtextxy(180,380,"EXIT....");
		     c++;
		     ch=getch();
		     if(ch==13) break;
		    else if(ch=='w') { c-=2; goto f;}
			else if((ch=='s'))
		    {  c=1; goto b;  }
		      } //g if close
		     } //f if
		   }//e if
		   }// d elseif
	    } //b if
	}//while
}// main








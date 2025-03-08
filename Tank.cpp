#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void mape();
void move();
void obstacle();
void bomb();
void bomb1();

enum motion{stop=0, up, down, LEFT, RIGTH};
motion dir;

int arz = 20, tol = 20;
bool gameover = false;
int x =19;
int y =10;
int fruitx=rand()%arz+1;
int fruity=rand()%tol+1;
int bombx= rand()%arz+1;
int bomby= rand()%tol+1;

main()
{
  while(!gameover)
  {
	mape();	
    move();
    obstacle();
    bomb();
    bomb1();
	_sleep(300);    
  } 
}
void bomb1()
{
	system("color b");
    bombx= rand()%arz+1;
    bomby= rand()%tol+1; 
}
void bomb()
{
	fruitx=rand()%arz+1;
    fruity=rand()%tol+1; 	
}
void obstacle()
{
    if(x==-1 || x==20 || y==19 || y==0)
       gameover = true;
    if(x==16 )
	  if( y==1 || y==2 || y==3 || y==4 || y==5 || y==6 || y==7 || y==8 || y==9 || y==10)
       gameover = true;
    if(x==14)
      if( y==3 || y==4 || y==5 || y==6 || y==7 || y==8 || y==9 || y==10 || y==11 || y==12 || y==13 || y==14 || y==15
	     || y==16 || y==17 )
       gameover = true;    
    if(x==5)
      if(y==6 || y==7 || y==8 || y==9 || y==10 || y==11 || y==12 || y== 13)
       gameover = true;
        /*if(x>=5)
           x=x-1;
		else if(x>=5)
		   x=x+1;*/
	  	
}
void move()
 
{
	if(_kbhit())
	{
		switch(_getch())
		{
		 case 'q' : dir=stop; break;
		 case 'w' : dir=up;   break;
		 case 's' : dir=down; break;
		 case 'd' : dir=RIGTH;break;
		 case 'a' : dir=LEFT; break;	
		}
	}
	switch(dir)
	{
		case up   : x--; break;
		case down : x++; break;
		case RIGTH: y++; break;
		case LEFT : y--; break;
	}
}
 
void mape()
{
	int i, j;
	system("cls");
	for(i=0;i<arz;i++)
	    cout << "#";
	cout << endl;
	for(i=0;i<tol;i++)
	{
		for(j=0;j<arz;j++)
		{
		   if(j==0 || j==arz-1)
		      cout << '#';
		   else if(i==5 && j==6)
		          	for(j=5;j<13;j++)
				      cout << '#';
		   else if(i==17 && j==1)
		          	for(j=0;j<10;j++)
		          	    cout << '^';
		   else if(i==14 && j==3)
		            for(j=2;j<=16;j++)
					    cout << '#';      
			else if(i==x && j==y)
			        cout << "A";
			else if(i==fruitx && j==fruity)
			        cout << "B";
			else if(i==bombx && j==bomby)
			        cout << "B";
		    else
		      cout << ' ';
			if(x==0)
	          {  
			    cout << "win";
			    gameover=true;
				exit(0);			
			  }

			else if(x==fruitx && y==fruity)
			       gameover=true;	
			else if(x==fruitx && y==fruity)
			        gameover=true;
		
		}cout << endl;
	}
	for(i=0;i<arz;i++)
		    cout << "#";
	cout << endl;
	

}

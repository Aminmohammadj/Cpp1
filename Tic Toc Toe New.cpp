#include <iostream>
#include <conio.h>
using namespace std;
void menu();
int bb();
char a[10]={'O', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

main()
{
	char  mark;
	int  i, p=1;
	int b;

   do
   {
   	system("cls");
   	menu();
   	
   	p=(p % 2)? 1 : 2;
   	
   	mark = (p == 1)? 'O' : 'X';
   	cin >> b;
   	
   	if(b==1 && a[1]=='1')
      a[1]=mark;
	else if(b==2 && a[2]=='2')
	        a[2]=mark;
	else if(b==3 && a[3]=='3')
	        a[3]=mark;
	else if(b==4 && a[4]=='4')
	        a[4]=mark;
    else if(b==5 && a[5]=='5')
	        a[5]=mark;
	else if(b==6 && a[6]=='6')
	        a[6]=mark;
    else if(b==7 && a[7]=='7')
            a[7]=mark;
    else if(b==8 && a[8]=='8')
            a[8]=mark;
    else if(b==9 && a[9]=='9')
            a[9]=mark;
    else {cout << "Not number!" << p--; getch();}
    i = bb();
    p++;
   }while(i == -1);
   
   menu();
   
   if(i == 1)
      cout << "p " << --p << " wid";
   else 
      cout << "Equl";	
}
int bb()
{    
          if(a[1]==a[2]&&a[2]==a[3]) return 1;
	 else if(a[4]==a[5]&&a[5]==a[6]) return 1;
     else if(a[7]==a[8]&&a[8]==a[9]) return 1;
     
     else if(a[1]==a[5]&&a[5]==a[9]) return 1;
     else if(a[3]==a[5]&&a[5]==a[7]) return 1;
     else if(a[1]==a[4]&&a[4]==a[5]) return 1;
     
     else if(a[2]==a[5]&&a[5]==a[8]) return 1;
     else if(a[3]==a[6]&&a[6]==a[9]) return 1;
     
     if(a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' &&
	 a[8]!='8' && a[9]!='9')         return 0;
	 
	 else return -1;
}
void menu()
{
	cout << "\n\n\t\t\t\---TIC TOC TOE---\n\n\n";
	cout << "\t\t\t\Player : O AND X \n\n\n";
		
	cout << '\n';
	cout << "\t\t\t    |    |   \n";
	cout << "\t\t\t  " << a[1] << " |  " << a[2] << " |  " << a[3] << endl;
	cout << "\t\t\t____|____|____\n";
	cout << "\t\t\t    |    |   \n";
	cout << "\t\t\t  " << a[4] << " |  " << a[5] << " |  " << a[6] << endl;	
	cout << "\t\t\t____|____|____\n";
	cout << "\t\t\t    |    |   \n";
	cout << "\t\t\t  " << a[7] << " |  " << a[8] << " |  " << a[9] << endl;
	cout << "\t\t\t    |    |   \n";	
}

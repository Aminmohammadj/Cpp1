#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	system("color a");
int c=0, w=0;
char ch=0;
cout<<"Enter a paragraph (and press Enter for end):\n";
while ((ch=getche()) != '\r')
{
c++;
if(ch==' ')
w++;
}
cout<<"\nChar count= "<<c<<", Word count= "<<w+1; getch();
cout <<endl;
cout << "In chi bod";
return 0;
}

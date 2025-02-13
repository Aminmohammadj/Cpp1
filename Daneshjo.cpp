#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
#define length  2
struct s{
    string name;
    int id;
    float ip;
    string fader;
}e[length];
void f(s );
main()
{
    int i;
    char c[50];
    char p[50];
    for(i=0;i<length;i++)
    {
    	cout << "Enter name: ";
    	getline(cin,e[i].name);
    	
    	cout << "Enter id: ";
    	cin.getline(c,49);//getline(cin,c);//cin.getline(c,49);
    	e[i].id = atoi (c);
    	
    	cout << "Enter ip: ";
    	cin.getline(p,49);
    	e[i].ip = atof (p);
    	
    	cout << "Enter fader name: ";
    	getline(cin,e[i].fader);
	}
	
	cout << "\nYou have entered these employees:\n";
	
	int j;
	for(j=0;j<length;j++)
	    f(e[j]);
}

void f(s m)
{
	cout << m.name;
	cout << setw(5) << m.id << setw(5) << m.ip << setw(5) << m.name << endl; 
}









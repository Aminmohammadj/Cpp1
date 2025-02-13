#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

#define len 3

struct Date{
	int day;
	int mon;
	int year;
};
struct student{
	string   fullname;
	long int id;
	float    gpa;
	Date     date;
}s[len];

main()
{
	int i;
	char idi[50], gp[50], da[50], dm[50], dy[50];
	for(i=0;i<len;i++)
	{
		cout << "Enter Fullname " << i+1 << ": ";
		getline(cin,s[i].fullname);
		
		cout << "Enter id: ";
		cin.getline(idi,49);
		s[i].id = atoi (idi);
		
		cout << "Enter GPA: ";
		cin.getline(gp,49);
		s[i].gpa = atof (gp);
		
		cout << "Enter Date day: ";
		cin.getline(da,49);
		s[i].date.day = atoi (da);
		cout << "Enter Date mon: ";
		cin.getline(dm,49);
		s[i].date.mon = atoi (da);
		cout << "Enter Date year: ";
		cin.getline(dy,49);
		s[i].date.year = atoi (da);
	}

	
	int j, m, n, k;
	float sum = 0, sum1;
	for(j=0;j<len;j++)
	{
		sum += s[j].gpa;
	}
	
	cout << "\n--------------------------------------\n";
	
	cout << "\nGPA AL: " << sum/len << endl;
	
	cout << "\n--------------------------------------\n";
	
	sum1 = sum/len;
	
	for(m=0;m<len;m++)
	{
		if(s[m].gpa > sum1)
		  cout << "\n" << m+1 << ": " << s[m].fullname << endl;
	}
	
	cout << "\n--------------------------------------\n";
	
	int c = 0;
	for(n=0;n<len;n++)
	    if(s[n].gpa < 14)
	       c++;
	cout << "students averages below 14:" << c << endl;
	
	cout << "\n--------------------------------------\n";
	
	int dat = s[0].date.year, d;
	
	for(k=0;k<len;k++)
	    if(s[k].date.year > dat)
	    {
	      dat = s[k].date.year;	  
		  d = k;  	
		}

    cout << "The youngest student: " << s[d].fullname << endl;
    
    cout << "\n--------------------------------------\n";
}
































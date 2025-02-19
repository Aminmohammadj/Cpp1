#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int moon[12]={31,31,31,31,31,31,30,30,30,30,30,29};
	int days=0;
	int i;
	int month,day;
	cout << "Please enter the month number.\n";
	cin >> month;
	if(month < 1 || month > 12)
	{
		cout << "We dont have such a month.";
		exit(0);
	}
	for(i=0;i<month-1;i++)
	    days+=moon[i];
	    
	cout << "Please enter the day number.\n";
	cin >> day;
	days+=day;
	cout << days;
}

/*{
short month, day, total_days;
int day_per_month[12]={31,31,31,31,31,31,30,30,30,30,30,29};
cout<<"Enter month (1 to 12): ";
cin>>month;
if (month<1 || month>12)
{
cout<<"Wrong input! Press any key to end. \n"; 
getch();
return 0;
}
cout<<"Enter day (1 to 31): ";
cin>>day;
total_days=day;
for (int i=0; i<month-1; i++)
        total_days+=day_per_month[i];
cout<<"Total days from start of year is:"<<total_days<<endl;
return 0;
}
#include <iostream>
using namespace std;
main()
{
	int n, p = 0;
	cout << "Enter month:\n";
	cin >> n;
	
	switch(n)
	{
		case 1  : p+=0;  break; 
		case 2  : p+=31;  break;
		case 3  : p+=62;  break;
		case 4  : p+=93; break;
		case 5  : p+=124; break;
		case 6  : p+=155; break;
		case 7  : p+=186; break;
		case 8  : p+=216; break;
		case 9  : p+=246; break;
		case 10 : p+=276; break;
		case 11 : p+=306; break;
		case 12 : p+=336; break;
		default : cout << "There is no such month.";
	}
	cout << "Enter day:";
	int q;
	cin >> q;
	p+=q;
	
	cout << "Number of days elapsed in the year.\n" << p;
}*/

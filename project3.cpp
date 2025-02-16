#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	int n;
	int i, j,c = 0;
	char ch[50];
    cout << "Enter n:";
    cin.getline(ch,49);
    n = atoi(ch);
    cout << "\nAdad fard:)-(";
	for(i=2;i<n;i++)
	{
	    for(j=2;j<=i/2;j++)
	    {
           if(i%j==0)
             {
              c++;    
			  break;       	
		     } 	    	
		}
        if(c==0 && i!=1)
           cout << i << "\t";
	       c = 0;     
	}
	cout << " ).";
}

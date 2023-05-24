#include <iostream>
using namespace std;
int main()
{
	int d=0,y=0,m=0,i=0,r=0,r2=0,m2=0,d2=0,y2=0,dt=0;
	cout << "This program would take the number of days as an input and display the number of months, years or days that they can cover." <<endl;
	cin >> i;
	//year determing
	if (i>=365)
	{
		while (i>=365)
		{
		r = i-365;
		y++;
		i=r;
		}
	}
	if (r>=31)
	{
		while (r>=31)
		{
		d = r-31;
		m++;
		r=d;
		}
		if (r<31)
		{
		r+d;
		}
	cout << "The input would make about " << y << " Year(s), " << m << " month(s) and " << d << " day(s)." <<endl;
	}
	
	else if (i<365)
	{
		while (i>=31)
		{
		d2 = i-31;
		m2++;
		i=d2;
		}
		if (r2<31)
		{
		r2+d2;
		}
		cout << "The input would make about " << y2 << " Year(s), " << m2 << " month(s) and " << d2 << " day(s)." <<endl;
	}
cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl;
return 0;
}
	
	// if greater
	//if smaller
	//month determining
	//if greater
	//if smaller
	//days determining
	//if greater
	//if smaller

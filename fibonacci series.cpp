#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout << "K22SW015" <<endl;
	cout << "This program would write the fibonacci series of a number that you input." <<endl;
	cin >> d;
	a=0,b=1;
	cout << a << "," << b << ",";
	c=2;
	do
	{
		c=a+b;
		cout << c << ",";
		a=b;
		b=c;
		c++;
	}
	while (c<d && c!=d && d>c);
return 0;
}

#include <iostream>
using namespace std;
int a,m=1;
int fact()
{
	cout << "The factorial of " << a << " is ";
	while (a!=1)
	{
		m=m*a;
		a--;
	}
	cout << m << "." <<endl;
}
int main()
{
	cout << "Enter the number that you want to find the factorial of : " <<endl;
	cin >> a;
	fact();
	return 0;
}

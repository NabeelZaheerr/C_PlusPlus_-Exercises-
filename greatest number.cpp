#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter first number." <<endl;
	cin >> a;
	cout << "Enter second number." <<endl;
	cin >> b;
	cout << "Enter Third number." <<endl;
	cin >> c;
	if (a>b && a>c)
	cout << a << " is The Largest Number." <<endl;
	if (b>a && b>c)
	cout << b << " is The Largest Number." <<endl;
	if (c>b && c>a)
	cout << a << " is The Largest Number." <<endl;
	return 0;
}

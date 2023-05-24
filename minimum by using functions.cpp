#include <iostream>
using namespace std;
int a,b;
int minimum()
{
	if (a>b)
	cout << b << " is the Minimum number while " << a <<  " is the Maximum number." <<endl;
	else if (b>a)
	cout << a << " is the Minimum number while " << b <<  " is the Maximum number." <<endl;
}
int main()
{
	cout << "Enter the two numbers and this program would tell you which is the smallest and the largest one." <<endl;
	cin >> a>>b;
	minimum();
	return 0;
}


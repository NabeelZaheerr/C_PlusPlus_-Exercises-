#include <iostream>
using namespace std;
int a;
int det()
{
	if (a==0)
	cout << a << " is equal to zero." <<endl;
	else if (a%2!=0)
	cout << a << " is an odd number." <<endl;
	else
	cout << a << " is an Even number." <<endl;
}
int main()
{
	cout << "Enter a number and this program would determine whether its even or odd." <<endl;
	cin >> a;
	det();
	return 0;
}

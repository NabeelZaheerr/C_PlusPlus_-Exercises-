#include <iostream>
using namespace std;
int main()
{
	cout << "This is a Program that would give you the answer of (a+b)^2." <<endl;
	cout << "Please Enter the value of A first." << endl;
	float a = 0;
	cin >> a;
	cout << "Please Enter the Value of B." <<endl;
	float b = 0;
	cin >> b;
	cout << "(a+b)^2 would be equal to " << a*a+(a*b)+(a*b)+(b*b) << " if the Values of a and b are " << a << " and " << b << " respectively.";
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "K22SW015" <<endl;
	cout << "Enter Any Year to find if its a leap year or not." <<endl;
	cin >> a;
	if (a%4==0)
	{
		cout << a <<" is a leap year!" <<endl;
	}
	else
	cout << a << " is not a leap year!" <<endl;
	return 0;
}

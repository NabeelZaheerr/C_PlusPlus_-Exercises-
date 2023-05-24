#include <iostream>
using namespace std;
int main()
{
	int a,m;
	cout << "K22SW015" <<endl;
	cout << "This Program would print the table of 10." <<endl;
	cout << "How many times would you like to print the table?" <<endl;
	cin >> a;
	while (m<=a)
	{
	cout << "10 X " << m << " = " << m*10 <<endl;
	m++;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a,b,m=1;
	cout << "K22SW015" <<endl;
	cout << "Which Number do you want to find the table of ?" <<endl;
	cin >> a;
	cout << "Till how many times?" <<endl;
	cin >> b;
	while (m<=b)
	{
		cout << a << " X " << m << " = " << a*m <<endl;
		m++;
	}
	return 0;
}

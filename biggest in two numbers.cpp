#include <iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl;
	cout << "his Program would help you to determine the bigger number from the inputs you give." <<endl;
	cout << "Please enter your first number." <<endl;
	cin >> n1;
	cout << "Please enter your Second number." <<endl;
	cin >> n2;
	if (n1>n2)
	cout << n1 << " is Greater than " << n2 << "." <<endl;
	else if (n2>n1)
	cout << n2 << " is Greater than " << n1 << "." <<endl;
	else if (n2==n1)
	cout << n2 << " is Equal to " << n1 << " and vice versa." <<endl;
	cout << "Try Again with a different value." <<endl <<endl <<endl;
	main();
	return 0;
}

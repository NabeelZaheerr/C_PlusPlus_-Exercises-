#include <iostream>
using namespace std;
int main()
{
	int a,n;
	while (true)
	{
	cin >> a;
	n=a%2;
	switch (n)
	{
		case (1):
	cout << "Odd." <<endl;
	break;
		case (0):
	cout << "Even." <<endl;
	break;
	 default :
	cout << "Invalid." <<endl;
	break;
	}
	}
}

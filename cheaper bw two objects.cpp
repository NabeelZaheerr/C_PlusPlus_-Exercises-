#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter the Price of Object 1." <<endl;
	cin >> a;
	cout << "Enter the Price of Object 2." <<endl;
	cin >> b;
	if (a<b)
	cout << "Object 1 is cheaper!" <<endl;
	else if (b<a)
	cout << "Object 2 is cheaper!" <<endl;
return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter the Price of Object 1." <<endl;
	cin >> a;
	cout << "Enter the Price of Object 2." <<endl;
	cin >> b;
	cout << "Enter the Price of Object 3." <<endl;
	cin >> c;
	if (a<b && a<c)
	cout << "Object 1 is cheaper!" <<endl;
	else if (b<a && b<c)
	cout << "Object 2 is cheaper!" <<endl;
	else if (c<a && c<b)
	cout << "Object 3 is cheaper!" <<endl;
return 0;
}

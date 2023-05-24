#include <iostream>
using namespace std;
int main()
{
	int a[3];
	cout << "Enter the Price of Object 1." <<endl;
	cin >> a[1];
	cout << "Enter the Price of Object 2." <<endl;
	cin >> a[2];
	cout << "Enter the Price of Object 3." <<endl;
	cin >> a[3];
	
	if (a[1]<a[2] && a[1]<a[3])
	{
	cout << "Object 1 is cheaper!" <<endl;
	if (a[2]<a[3])
		cout << "Ascending Order = " << a[1] << "," << a[2] << "," << a[3] << "," <<endl;
	else if (a[3]<a[2])
		cout << "Ascending Order = " << a[1] << "," << a[3] << "," << a[2] << "," <<endl;
	}

	else if (a[2]<a[1] && a[2]<a[3])
	{
	cout << "Object 2 is cheaper!" <<endl;
	if (a[1]<a[3])
		cout << "Ascending Order = " << a[2] << "," << a[1] << "," << a[3] << "," <<endl;
	else if (a[3]<a[1])
		cout << "Ascending Order = " << a[2] << "," << a[3] << "," << a[1] << "," <<endl;
	}
	
	else if (a[3]<a[1] && a[3]<a[2])
	{
	cout << "Object 3 is cheaper!" <<endl;
	if (a[2]<a[1])
		cout << "Ascending Order = " << a[3] << "," << a[2] << "," << a[1] << "," <<endl;
	else if (a[1]<a[2])
		cout << "Ascending Order = " << a[3] << "," << a[1] << "," << a[2] << "," <<endl;
	}
return 0;
}

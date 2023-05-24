#include <iostream>
using namespace std;
int main()
{
	cout << "K22SW015" <<endl;
	int a[3];
	int i=0;
	cout << "Enter 3 values in your array." <<endl;
	for (i=0; i<3; i++)
	{
		cin >> a[i];
	}
	i=0;
		if (a[i] > a[i+1] && a[i] > a[i+2])
		{
			cout << a[i] << " is the maximum value stored in the array." <<endl;
		}
		else if (a[i+1] > a[i] && a[i+1] > a[i+2])
		{
			cout << a[i+1] << " is the maximum value stored in the array." <<endl;
		}
		else if (a[i+2] > a[i] && a[i+2] > a[i+1])
		{
			cout << a[i+2] << " is the maximum value stored in the array." <<endl;
		}
	return 0;
}

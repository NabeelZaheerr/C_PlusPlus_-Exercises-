#include <iostream>
using namespace std;
int main()
{
	cout << "K22SW015" <<endl;
	int a[3],b[3],i;
	cout << "Enter 3 values of the first array." <<endl;
	for (i=0;i<3;i++)
	{
		cin >> a[i];
	}
	cout << "Enter 3 values of the second array." <<endl;
	for (i=0;i<3;i++)
	{
		cin >> b[i];
	}
	cout << "The sum of array one and array two is : " <<endl;
	for (i=0;i<3;i++)
	{
		cout << a[i]+b[i] <<endl;
	}
return 0;
}

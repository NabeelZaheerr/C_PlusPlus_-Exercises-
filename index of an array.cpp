#include <iostream>
using namespace std;
int main()
{
	int a[3];
	int i=0,p=0;
	cout << "K22SW015" <<endl;
	cout << "Enter three values for an array." <<endl;
	for (i=0; i<3; i++)
	{
		cin >> a[i];
	}
	cout << "Type an element that you want to search in your array." <<endl;
	cin >> p;
	for (i=0; i<3; i++)
	{
		if (p==a[i])
		{
			cout << "The element \"" << p << "\" exists in the array with the index of " << i << "." << endl;
			break;
			return 0;
		}
		else if (p!=a[i] && i==2)
		{
			cout << "The mentioned element doesn't exists in the array." <<endl;
			break;
			return 0;
		}
	}
return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a[5][5];
	cout << "Enter values for an array with 5 rows and 5 colums (25 Values)." <<endl;
	for (int i=0;i<5; i++)
	{
		for (int j=0;j<5;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "The array would look something like this." <<endl;
		for (int i=0;i<5; i++)
	{
		for (int j=0;j<5;j++)
		{
			if (a[i][j]<10)
			{
			cout << a[i][j] << "    ";
			}
			else if (a[i][j]>9)
			{
			cout << a[i][j] << "   ";
			}
		}
		cout << endl;
	}
	return 0;
}

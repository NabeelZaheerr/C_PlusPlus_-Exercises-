#include <iostream>
using namespace std;
int main()
{
	cout << "K22SW015" <<endl;
	int c=11,r,rc;
	cout << "How many rows do you want (ODD)?" <<endl;
	cin >> r;
	if (r==0 || r<0 || r%2==0)
		cout << "Invalid Value for Rows!" <<endl;
	else
	{
		for (rc=1; rc<=r; rc++)
		{
			if (rc%2==0)
			{
				cout << "*0*0*0*0*0*" <<endl;
			}
			else if (rc%2!=0)
			{
				cout << "***********" <<endl;
			}
		}
	}
return 0;
}

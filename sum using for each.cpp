#include <iostream>
using namespace std;
int main() 
{
	int i,l,ans=0;
	cout << "How long of an array do you require?" <<endl;
	cin >> l;
	int a[l];
	cout << "Enter the values of the array." <<endl;
	for (i=0;i<l;i++)
	{
	cin >> a[i];
	}
	cout << "The sum of the entire array is : ";
	for (int i : a)
	{
		ans = ans+i;
	}
	cout << ans <<endl;
   return 0;
}

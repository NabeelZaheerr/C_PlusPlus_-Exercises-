#include <iostream>
using namespace std;
int main()
{
	int m=2,a,ans=0;
	cout << "K22SW015" <<endl;
	cout << "This program would find the summ of all the even numbers upto the the number you input." <<endl;
	cout << "Enter a number."<<endl;
	cin >> a;
	while (m<=a)
	{
	ans=ans+m;
	m=m+2;
	}
	cout << "The sum Of all Even Numbers From 2 to " << a << " Would be equal to " << ans << "." <<endl;
	return 0; 
}

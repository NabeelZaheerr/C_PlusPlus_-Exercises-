#include <iostream>
using namespace std;
int main()
{
	long long a,b,m;
	cout << "K22SW015" <<endl;
	cout << "Enter a Number." <<endl;
	cin >> a;
	b=a;
	while (a!=0)
	{
	a=a/10;
	m++;
	}
	m=m-1;
	cout << "The number "<< b << " has "<< m << " Digits in it." <<endl;
	return 0;
}

#include <iostream> <string>
using namespace std;
int main()
{
	int a,b,c=1;
	cout << "K22SW015" <<endl;
	cout << "Type any number and this program would find the product of it's digits. " <<endl;
	cin >> a;
	do
	{
		b=a%10;
		c=c*b;
		a=a/10;
	}
	while (a!=0);
	cout <<"This would be equal to " << c << "." <<endl;
}

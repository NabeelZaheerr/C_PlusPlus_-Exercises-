#include <iostream>
using namespace std;
float a,b;
int division()
{
	cout << a << " Divided by " << b << " is equal to " << a/b << "." <<endl;
}
int main()
{
	cout << "Enter the two numbers and this program would tell you its division." <<endl;
	cin >> a>>b;
	division();
	return 0;
}

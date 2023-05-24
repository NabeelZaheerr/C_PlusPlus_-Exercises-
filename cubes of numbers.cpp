#include <iostream>
using namespace std;
int main()
{
	int n=1,a;
	cout << "K22SW015" <<endl;
	cout << "This Program would find the Cubes of all of the integers till the integer you input." <<endl;
	cout << "Enter a number." <<endl;
	cin >> a;
	while (n<=a)
	{
		cout << "The Cube of " << n << " would be " << n*n*n << "." <<endl;
		n++;
	}
	return 0;
}

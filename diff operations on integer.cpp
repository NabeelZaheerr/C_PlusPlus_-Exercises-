#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double y = 0;
	cout << "Please Type an integer." <<endl;
	cin >> y;
	if (y == 0 || y >= 0 || 0 >= y)
	{
	cout << "The Square of " << y << " is " << y*y << "." <<endl;
	cout << "The Cube of " << y << " is " << y*y*y << "." <<endl;
	cout << "The Power of 5 of " << y << " is " << y*y*y*y*y << "." <<endl;
	cout << "The Square Root of " << y << " is " << sqrt(y) << "." <<endl;
	exit(0);
	}
	else
	{
	cout << "The Value is Invalid" <<endl <<endl;
	main();
	}
return 0;
}

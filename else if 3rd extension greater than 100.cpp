#include <iostream>
using namespace std;
int main()
{
	cout << "This Program would tell you if a number is greater than 100 or not." <<endl;
	cout << "Please Enter a Number." <<endl;
	float value=0;
	cin >> value;
	if (value<100)
{
	cout << "The Number is Less than 100." <<endl;
}
	else if (value==100)
	{
	cout << "The Number is Equal to 100." <<endl;
}
	else
	{
		cout << "The Number is Greater than 100." <<endl;
	}
	return 0;
}

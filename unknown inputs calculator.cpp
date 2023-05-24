#include <iostream>
using namespace std;
int main()
{
	cout << "This Program would Find the sum of the numbers that you input." <<endl;
	cout << "After putting all the numbers, Please Ctrl+Z and then Press Enter." <<endl;
	float sum=0,value=0;
	while (cin >> value)
	{
		sum += value ;
	}
	cout << "Sum of the given numbers is " << sum << ".";
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	cout << "This program would tell you if a number is even or Odd." <<endl;
	cout << "Enter a Number." <<endl;
	int value=0;
	cin >> value;
	if (value%2 == 0)
	{
	cout << "The Number is Even.";
	}
    else
    {
    cout << "The Number is Odd.";
    return 0;
	}
}

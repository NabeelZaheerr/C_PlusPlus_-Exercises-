#include <iostream>
using namespace std;

int main() {
char input[500];
int finalans, integer = 0;
cout << "Input a Number." <<endl;
cin >> input;
while (input[integer++] != '0' && finalans!=1)
{
    if (input[integer] == '.')
	{
	cout << input << " is a floating-point number."<<endl;
    finalans=1;
	}
}
    if (finalans != 1)
    {
    cout << input << " is an integer number." <<endl;
	}
return 0;
}



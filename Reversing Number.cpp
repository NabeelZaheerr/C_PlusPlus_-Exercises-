#include <iostream>
using namespace std;
int main ()
{
	long long number,answer,remainder,show,choice;
	cout << "This program would give you the literal Reversed form of any number." <<endl;
	cout << "Please Enter a Number." <<endl;
	answer = 0;
	cin >> number;
	show = number;
	
	if (cin.fail())
	{
	cout <<"Invalid Value! \n" << "Program Ended Successfully!";
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	}
	else if (number>0 || number==0 || number<0)
	{
		while (true)
		{
			while (number != 0)
			{
    		remainder = number % 10;
    		answer = answer * 10 + remainder;
    		number = number/10;
  			}
		cout << "The literal reverse of " << show << " is " << answer << "! \n";
		cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
		cout << "Press 3 to close the program \n" << "Press 1 to try again with a different value. \n";
		cin >> choice;
			if (choice == 3)
			{
			cout << "Execution Terminated. \n" << "Program Ended Successfully! \n" << "Have a Great Day human! \n";
			cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
			break;
			}
				else if (choice == 1)
				{
				main();
				}
					else if (choice != 1 || choice != 3)
					{
					cout << "Invalid Value! \n" << "Program Ended.";
					cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
					break;
					}
		}
	}
	return 0;
}

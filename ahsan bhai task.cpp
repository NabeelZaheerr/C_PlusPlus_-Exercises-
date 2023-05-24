#include <iostream> <string>
using namespace std;
int main()
{
	cout << "Please Enter a string value." <<endl;
	char c1, c2; //here, i declare 2 characters a counter.
	int counter = 0;
		if (cin >> c1)
		{
		++counter;
			int count = 1;
				while (cin >> c2)
				{
				++counter;
					if (c1 == c2) //here, it checks if the new input is same as the earlier one.
					++count; //if it is the same character then it adds to the count.
						else
						{
						cout <<endl << c1 << " Occurs " << count << " Times." <<endl; //this line prints the final line for that specific input by the user.
						c1 = c2; //this gives c1 the value of the new distinct input.
						count = 1; //this resets the counter.
						}
				}
		cout <<endl << c1 << " Occurs " << count << " Times." <<endl << "The Total Number of Characters in the Input was " << counter << "." <<endl;
		}

return 0;
}

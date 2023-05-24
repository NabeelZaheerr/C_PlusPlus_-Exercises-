#include <iostream>
using namespace std;
int main()
{
	cout << "This Program would calculate the number of consecutive outputs." <<endl;
	cout << "Input Some Values." <<endl;
    int currval = 0, val = 0;
    	if (cin >> currval)
    	{
     		int count = 1;
     		while (cin >> val)
     		{
				if (val == currval)
     			++count;
     				else
     				{
     				cout << currval << " Occurs " << count << " Times." << endl;
     				currval = val;
     				count = 1;
     				}
			}
 		cout << currval << " Occurs " << count << " Times." << endl;
		}
	return 0;
}

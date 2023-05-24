#include <iostream> <string>
using namespace std;
int main ()
{
	string val;
	cout << "Please Input a String Value to Find its length (Number of Characters)." <<endl;
	cin >> val;
	cout << "The length of the string \"" << val << "\" is " << val.length() << " Characters." <<endl;
	return 0;
}

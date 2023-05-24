#include <iostream>
using namespace std;
int main()
{
	int s;
	cout << "K22SW015" <<endl;
	cout << "Enter your Score." <<endl;
	cin >> s;
	if (s>=90)
	cout << "You have Secured A Grade!" <<endl;
	else if (s>=80)
	cout << "You have Secured B Grade!" <<endl;
	else if (s>=70)
	cout << "You have Secured C Grade!" <<endl;
	else if (s<70)
	cout << "You have Failed!" <<endl;
return 0;
}

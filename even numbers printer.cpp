#include <iostream>
using namespace std;
int main()
{
	cout << "This Program Would Print Even Numbers from 0 to ____" <<endl;
	cout << "Enter the endpoint for the printing." << endl;
	int endn;
	cin >> endn;
	cout << endl;
	int n1;
	n1 = 1;
	cout << "Even Numbers from 0 to " << endn << " are listed Below." <<endl;
	cout << "0" << endl;
	while (n1<=endn)
{
	cout << n1+1 << endl;
	n1 = n1+2;
	}	
	return 0;
	}

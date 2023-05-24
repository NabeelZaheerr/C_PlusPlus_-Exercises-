#include <iostream>
using namespace std;
int main()
{
	int  a,b,c;
	cout << "K22SW015" <<endl;
	cout << "To check if you are eligible for the admission for this professional Course, Follow the directions." <<endl;
	cout << "What are your marks in Mathematics?" <<endl;
	cin >> a;
	cout << "What are your marks in Physics?" <<endl;
	cin >> b;
	cout << "What are your marks in Chemistry?" <<endl;
	cin >> c;
	if (a>=65 && b>=55 && c>=50)
	{
		cout << "Congratulations! You are Eligible for this Professional Course." <<endl;
	}
	else
	{
		cout << "Sorry! But You are Not Eligible for this Professional Course." <<endl;
	}
}

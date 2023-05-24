#include <iostream>
using namespace std;
int main()
{
	float bill;
	int id,units;
	string name,name2;
	cout << "K22SW015" <<endl;
	cout << "Enter Your Customer ID." <<endl;
	cin >> id;
	cout << "Your Full name with a Space in between?" <<endl;
	cin >> name;
	cin >> name2;
	cout << "How many Units have been consumed by you?" <<endl;
	cin >> units;
	cout << "----------------------------------------------------------------------------------------------------" <<endl;
	cout << "Customer ID = " << id <<endl;
	cout << "Mr/Ms : " << name << " " << name2 <<endl;
	cout << "Total Units Consumed : " << units <<endl;
	if (units<=199)
	{
	bill = units*1.20;
	cout << "Bill = " << bill << "." <<endl;
	}
	else if (units<400 && units>=200)
	{
	bill = units*1.50;
	cout << "Bill = " << bill << "." <<endl;
	}
	else if (units<600 && units>=400)
	{
	bill = units*1.80;
	cout << "Bill = " << bill << "." <<endl;
	}
	else if (units>=600)
	{
	bill = units*2.00;
	cout << "Bill = " << bill << "." <<endl;
	}
	if (bill>400)
	{
	bill = bill+(0.15*bill);
	cout << "Bill = " << bill << ". (With additional 15% Charges as you bill was exceeding 400 Rupees.)" <<endl;
	}
	return 0;
}

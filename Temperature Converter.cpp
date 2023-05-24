#include <iostream>
using namespace std;
int main()
{
int choice;
cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
cout << "To Convert from Celsius to fahrenheit, Press 1." <<endl;
cout << "To Convert from Fahrenheit to celsius, Press 2." <<endl;
cout << "To Convert from Fahrenheit to Kelvin, Press 3." <<endl;
cout << "To Convert from Kelvin to Fahrenheit, Press 4." <<endl;
cout << "To Convert from Celsius to Kelvin, Press 5." <<endl;
cout << "To Convert from Kelvin to celsius, Press 6." <<endl;
cin >> choice;
	if (choice == 1)
	{
	cout << "Enter a Temperature value in Celsius to convert it in fahrenheit." << endl;
	double t1;
	cin >> t1;
	if (cin.fail())
	{
		cout << "The value is invalid." << "\n" << "Execution Terminated Successfully.";
		cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
		return 0;
	}
	cout << t1 << " celsius would be equal to " << (t1*1.8)+32 << " fahrenheit." << endl;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	cout << " " <<endl;
	main ();
	}
	else if (choice == 2)
	{
	cout << "Enter a Temperature value in Fahrenheit to convert it in Celsius." << endl;
	double t1;
	cin >> t1;
	if (cin.fail())
	{
		cout << "The value is invalid." << "\n" << "Execution Terminated Successfully.";
		return 0;
	}
	cout << t1 << " fahrenheit would be equal to " << (t1-32)*5/9 << " celsius." << endl;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	cout << " " <<endl;
	main ();
	}
	else if (choice == 3)
	{
	cout << "Enter a Temperature value in Fahrenheit to convert it in Kelvin." << endl;
	double t1;
	cin >> t1;
	if (cin.fail())
	{
		cout << "The value is invalid." << "\n" << "Execution Terminated Successfully.";
		cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
		return 0;
	}
	cout << t1 << " fahrenheit would be equal to " << ((t1-32)*0.555)+273.15 << " Kelvin." << endl;
	cout << " " <<endl;
	main ();
	}
	else if (choice == 4)
	{
	cout << "Enter a Temperature value in Kelvin to convert it in fahrenheit." << endl;
	double t1;
	cin >> t1;
	if (cin.fail())
	{
		cout << "The value is invalid." << "\n" << "Execution Terminated Successfully.";
		cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
		return 0;
	}
	cout << t1 << " kelvin would be equal to " << ((t1-273.15)*0.555)+32 << " fahrenheit." << endl;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	cout << " " <<endl;
	main ();
	}
	else if (choice == 5)
	{
	cout << "Enter a Temperature value in Celsius to convert it in Kelvin." << endl;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	double t1;
	cin >> t1;
	if (cin.fail())
	{
		cout << "The value is invalid." << "\n" << "Execution Terminated Successfully.";
		cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
		return 0;
	}
	cout << t1 << " celsius would be equal to " << t1+273.15 << " Kelvin." << endl;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	cout << " " <<endl;
	main ();
	}
	else if (choice == 6)
	{
	cout << "Enter a Temperature value in Kelvin to convert it in Celsius." << endl;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	double t1;
	cin >> t1;
	if (cin.fail())
	{
		cout << "The value is invalid." << "\n" << "Execution Terminated Successfully.";
		cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
		return 0;
	}
	cout << t1 << " kelvin would be equal to " << t1-273.15 << " Celsius." << endl;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
	cout << " " <<endl;
	main ();
	}
	else if (cin.fail() || choice>6 || choice<1)
	{
		cout << "The value is invalid." << "\n" << "Execution Terminated Successfully.";
		cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl <<endl;
		return 0;
	}
return 0;
}

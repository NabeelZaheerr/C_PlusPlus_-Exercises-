#include <iostream>
using namespace std;
int choice=0;
int error();
int secondchoicea();
int secondchoiceb();
int error()
{
cout << "Invalid Value." << endl << "Program Terminated Successfully.";
}
int secondchoicea()
{
	cout << "Is the Humidity ........?" <<endl;
	cout << "Press 1 for Dry. \nPress 2 for Humid." <<endl <<endl;
	cin >> choice;
	cout << "" <<endl;
	if (choice != 1 && choice != 2)
	error();
	if (choice == 1)
	cout << "Play Tennis!" <<endl <<endl;
	if (choice == 2)
	cout << "Go Swimming!" <<endl <<endl;
	
}
int secondchoiceb()
{
	cout << "Is the Humidity ........?" <<endl;
	cout << "Press 1 for Dry. \nPress 2 for Humid." <<endl <<endl;
	cin >> choice;
	cout << "" << endl;
	if (choice != 1 && choice != 2)
	error();
	if (choice == 1)
	cout << "Play Basketball!" <<endl <<endl;
	if (choice == 2)
	cout << "Watch TV!" <<endl <<endl;
	
}
main()
{
cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl;
cout << "Is the temperature ..........?" <<endl;
cout << "Press 1 for Warm. \nPress 2 for Cold." <<endl;
cin >> choice;
	if (choice != 1 && choice != 2)
	error();
	else if (choice == 1)
	secondchoicea();
	else if (choice == 2)
	secondchoiceb();
	else
	error();
}

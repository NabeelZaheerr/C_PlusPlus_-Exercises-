#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "K22SW015" <<endl;
	cout << "Enter any Character." <<endl;
	cin >> c;
	if (c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9' || c==0)
	{
		cout << "The character is a number!" <<endl;
	}
	else if (c=='a' || c=='b' || c=='c' || c=='d' || c=='e' || c=='f' || c=='g' || c=='h' || c=='i' || c=='j' || c=='k' || c=='l' || c=='m' || c=='n' || c=='o' || c=='p' || c=='q' || c=='r' || c=='s' || c=='t' || c=='u' || c=='v' || c=='w' || c=='x' || c=='y' ||c=='z')
	{
		cout << "The chatracter is an alphabet!" <<endl;
	}
	else
	{
		cout << "The character is an Special Character." <<endl;
	}
}

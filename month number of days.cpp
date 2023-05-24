#include <iostream>
using namespace std;
int main()
{
int i;
cout << "K22SW015" <<endl;
cout << "Which Month Do you want to find the number of days of?" <<endl;
cout << "1 for January \n2 for February \n3 for March \n4 for April \n5 for May \n6 for June \n7 for July \n8 for August \n9 for September \n10 for October \n11 for November \n12 for December" <<endl;
cin >> i;
if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
{
	cout << "The Month You Chose has 31 Days." <<endl;
}
else if (i==4||i==6||i==9||i==11)
{
	cout << "The Month You Chose has 30 Days." <<endl;
}
else if (i==2)
{
	cout << "The Month You Chose has 28 Days (Considering that its not a leap year)." <<endl;
}
else
cout << "Invalid Month Number." <<endl;

return 0;
}

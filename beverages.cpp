#include <iostream> <stdlib.h>
using namespace std;
error()
{
	cout << "Error! The value was not Valid. Here is Your Money Back!" <<endl;
	return 0;
	exit;
}
int main()
{
	int a,q;
	cout << "K22SW015" <<endl;
	cout << "Enter \n1 for Pepsi = (200ml) = 75 Rupees. \n2 for Sprite = (200ml) = 65 Rupees. \n3 for Fanta (200ml) = 50 Rupees. \n4 for Coca Cola (200ml) = 95 Rupees. \n5 for 7-UP Soda (200ml) = 80 Rupees." <<endl;
	cin >> a;
	if (a!=1 && a!=2 && a!=3 && a!=4 && a!=5)
	{
	error();
	return 0;
	}
	cout << "How many of them do you want to buy?" <<endl;
	cin >> q;
	if (q<=0)
	{
	error();
	return 0;
	}
	if (a==1)
	{
		cout << "You bought " << q << " can(s) of pepsi for " << q*75 << " rupees!" <<endl;
	}
	else if (a==2)
	{
		cout << "You bought " << q << " can(s) of Sprite for " << q*65 << " rupees!" <<endl;
	}
	else if (a==3)
	{
		cout << "You bought " << q << " can(s) of Fanta for " << q*50 << " rupees!" <<endl;
	}
	else if (a==4)
	{
		cout << "You bought " << q << " can(s) of Coca Cola for " << q*95 << " rupees!" <<endl;
	}
	else if (a==5)
	{
		cout << "You bought " << q << " can(s) of 7-UP Soda for " << q*80 << " rupees!" <<endl;
	}
return 0;
}

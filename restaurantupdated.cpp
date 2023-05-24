#include <iostream>
using namespace std;
int main()
{
	int choice=1,q;
	while(choice>0)
	{
	
		cout << "What would you like to have?" <<endl;
		cout << "Enter :" <<endl << "1 - For 1 Sheermal Roti = 25 Rupees." <<endl << "2 - For 1 Khasta Chapaati = 10 Rupees." <<endl << "3 - For 1 Tandoor Ki roti = 35 Rupees." <<endl << "4 - For 1 Crispy Paratha = 40 Rupees." <<endl;
		cin >> choice;
	
			if (choice != 1 && choice != 2 && choice != 3 && choice != 4)	
			{		 
			cout << "Error : The Value is Invalid!" <<endl <<endl;
			break;
			}
			else
			{
				cout << "Please Specify the Quantity." <<endl;
				cin >> q;
				if (q<0)
    			{
    			cout << "The Quantity is Invalid." <<endl <<endl;
    			break;
				}
			}
	
		if (choice==1)
		{
		cout << "Thank You For Your Purchase!" <<endl;
		cout << "Your Sheermal Roti is on its way!" <<endl;
		cout << "Your Total Bill would be " << q*25 << " Rupees." << endl;
		}
    	else if (choice==2)
    	{
    	cout << "Thank You For Your Purchase!" <<endl;
    	cout << "Your Khasta Chapaati is on its way!" <<endl;
    	cout << "Your Total Bill would be " << q*10 << " Rupees." << endl;
		}
    	else if (choice==3)
		{
		cout << "Thank You For Your Purchase!" <<endl;
		cout << "Your Tandoor Ki Roti is on its way!" <<endl;
		cout << "Your Total Bill would be " << q*35 << " Rupees." << endl;
		}
		else if (choice==4)
		{
		cout << "Thank You For Your Purchase!" <<endl;
		cout << "Your Crispy Paratha is own its way!" <<endl;
		cout << "Your Total Bill would be " << q*40 << " Rupees." << endl;
		}
	return 0;
	}
}


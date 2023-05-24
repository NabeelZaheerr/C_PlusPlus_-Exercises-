#include <iostream>
using namespace std;
error()
{
	cout << "Invalid Value" <<endl;
	return 0;
}
int main()
{
	int rows,middlespace,sidespace,middlerow,cr,temp;
	cout << "How many rows do you want? (ODD)." <<endl;
	cin >> rows;
	if (rows%2==0)
	error();
//Printing The Upper Half Of the Diamond.
	else
	{
		middlerow=(rows-1)/2; middlerow=middlerow+1;
		sidespace=middlerow-1;
		middlespace=1;
		for (cr=1;cr<=middlerow;cr++)
		{
			if (cr==1)
			{
				for (temp=1; temp<=sidespace; temp++)
				{
					cout << " ";
				}
				cout << "*";
				for (temp=1; temp<=sidespace; temp++)
				{
					cout << " ";
				}
			cout << endl;	
			sidespace--;
			}
			else
			{
				while (cr>1 && cr<=middlerow)
				{
					for (temp=1; temp<=sidespace; temp++)
					{
						cout << " ";
					}
				cout << "*";
					for (temp=1;temp<=middlespace;temp++)
					{
						cout << " ";
					}
				cout << "*";
					for (temp=1; temp<=sidespace; temp++)
					{
						cout << " ";
					}
				cout << endl;
				sidespace--;
				middlespace=middlespace+2;
				cr++;
				}
			}
// 	Printing Thw Lower Half OF the Diamond.
			if (cr>middlerow)
			{
				sidespace=1;
				middlespace=middlespace-4;
				while (cr<rows)
				{
					for (temp=1; temp<=sidespace; temp++)
					{
						cout << " ";
					}
				cout << "*";
					for (temp=1;temp<=middlespace;temp++)
					{
						cout << " ";
					}
				cout << "*";
					for (temp=1; temp<=sidespace; temp++)
					{
						cout << " ";
					}
				cout << endl;
				sidespace++;
				middlespace=middlespace-2;
				cr++;
				if (cr==rows)
				{
					for (temp=1; temp<=sidespace; temp++)
					{
					cout << " ";
					}
				cout << "*";
					for (temp=1; temp<=sidespace; temp++)
					{
					cout << " ";
					}	
				cout <<endl;
				}
				}
			}
		}
	}
return 0;	
}

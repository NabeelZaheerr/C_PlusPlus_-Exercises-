#include <iostream><string>
using namespace std;
int main()
{
	int a,b,j,i;
	cout << "K22SW015" <<endl;
	cout << "you want all possible (two digit) numbers from 0 till?" <<endl;
	cin >> b;
	if (b>9 || b<0)
	{
		cout << '\a' <<endl;
		cout << "Invalid Value!" << endl;
		return 0;
	}
	else 
	{
		b++;
		for (j=0; j<b; j++)
		{
			for (i=0; i<b; i++)
			cout << i << j << endl;
		}
	}
		return 0;
}

#include <iostream>
using namespace std;
int rn;
 
int pp()
{
 	int n;
    for(n=1; n <= rn; n++)// Loop to print each row
	{
        for(int r = 1; r < rn-n+1; r++) // Loop to print spaces for triangular display
            cout<<"  ";
            
        int val = 1;// Loop to print values using the Combinations formula
        for(int r = 1; r <= n; r++)
		{
            cout<<val<<"   ";
            val = val * (n - r)/r;
        }
        cout<<endl;
    }
}
 
int main()
{
	cout << "How many rows do you want in your pascal's triangle?" <<endl;
	cin >> rn;
    pp();
 
    return 1;
}

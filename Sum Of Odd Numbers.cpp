#include <iostream>
using namespace std;
int main()
{
	cout << "This program would calculate the sum of first consecutive Odd Numbers. How many Odd Numbers do you want to find the sum of?" <<endl;
	int Numberofconsecutiveoddnumbers;
	Numberofconsecutiveoddnumbers = 0;
	cin >> Numberofconsecutiveoddnumbers;
	int formula;
	formula = (Numberofconsecutiveoddnumbers+Numberofconsecutiveoddnumbers)-1;
	int n1, n2;
	n1 =1 , n2 =0;
	while (n1 <= formula)
	{
     n2 += n1;
     n1 = n1+2;
	}
cout << "The Sum of First " << Numberofconsecutiveoddnumbers << " Odd Numbers is " << n2 << ".";
return 0;
}

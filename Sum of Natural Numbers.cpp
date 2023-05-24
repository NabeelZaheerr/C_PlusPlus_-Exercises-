#include <iostream>
using namespace std;
int main()
{
	cout << "This program would calculate the sum of first consecutive Natural Numbers. How many natural numbers do you want to find the sum of?" <<endl;
	int fn;
	fn = 0;
	cin >> fn;
	int n1, n2;
	n1 =1 , n2 =0;
	while (n1 <= fn)
	{
     n2 += n1;
     n1 = n1+1;
	}
cout << "The Sum of First " << fn << " Natural Numbers is " << n2 << ".";
return 0;
}

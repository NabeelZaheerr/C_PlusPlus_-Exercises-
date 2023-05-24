#include <iostream>
using namespace std;
int main()
{
	cout << "This Program would calculate the sum of consecutive even numbers. How many Consecutive even numbers do you want to find the sum of?" <<endl;
	int noen;
	noen = 0;
	cin >> noen;
	int formula;
	formula = noen*(noen+1);
	cout << "The Sum Of First " << noen << " is " << formula << ".";
	return 0;
}

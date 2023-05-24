#include <iostream>
using namespace std;
int main()
{
cout << "This Program would Find the sum of consecutive Natural Numbers." <<endl;
cout << "How many Consecutive Natural numbers do you want to find the sum of?" <<endl;
int endp;
cin >> endp;
int sum;
sum=0;
for (int i=1;i<=endp;i++)
{
sum+= i;
}
cout << "The sum of first " << endp << " natural numbers is " << sum << ".";
return 0;
}

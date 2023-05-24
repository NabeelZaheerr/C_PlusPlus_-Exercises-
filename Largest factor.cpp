#include <iostream>
using namespace std;
int main()
{
	int i,n;
	
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "Factors of " << n << " are: " << endl;  
  for(i=1;i<=n;++i)
  {
      if(n%i==0)
         cout << i << endl;
  }
 cout <<"largest factor of number is " << n/2 <<endl;
  return 0;
}

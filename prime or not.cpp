#include <iostream>
using namespace std;
int main()
{
	int i,n,m,alans;
	cout << "K22SW015" <<endl;
	cout << "Enter a Number." <<endl;
	cin >> n;
	m=n/2;
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;
		  alans=26;   
          break;
          return 0;
      }
  }
  if (alans!=26)
  cout << "Number is Prime."<<endl;  
  return 0;  
}

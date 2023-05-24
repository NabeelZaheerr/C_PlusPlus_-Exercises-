#include <iostream>
using namespace std;
int main()
{
	long long p,f,i;
	f=1,i=1;
	cout << "K22SW015" <<endl;
	cout << "This program would calculate the factorial of the number that you input." <<endl;
	cin >> p;

 	if (p < 0)
    	    cout << "Invalid!";
    else if (p>0 || p==0)
			{
        	do
			{
            f=f*i;
            i++;
        	}
        	while(i <= p);
    }
	cout << "Factorial of " << p << " = " << f;  
	return 0;
}

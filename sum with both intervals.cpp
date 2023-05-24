#include <iostream>
using namespace std;
int main()
{
	int q1=0, q2=0, q3=0, sum=0;
	cout << "This Program Would Calculate the sum of numbers, according to the given intervals." <<endl;
	cin >> q1;
	q3=q1;
	cout << "Please input the limit of the ending interval." <<endl;
	cin >> q2;
		while (q1<=q2)
	{
	 sum += q1;
	 q1 = q1+1;
	}

    cout << "The Sum from " << q3 << " to " << q2 << " is " << sum <<endl;
    return 0;
}

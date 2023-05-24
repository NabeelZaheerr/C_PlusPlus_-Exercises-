#include <iostream>
using namespace std;
int main ()
{
	cout << "This Program Would Give You the Average of 5 numbers." <<endl;
	cout << "Please input 5 numbers by seperating them with a spacebar and then press enter." <<endl;
	int a = 0 , b = 0 , c = 0 , d = 0 , e = 0 , average = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	average = (a+b+c+d+e)/5;
	cout << "The Average of " << a << "," << b << "," << c << "," << d << " and " << e << " is " << average << "." <<endl;
}

#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout << "Which number do you want to find the tables of?" <<endl;
	cin >> a;
	cout << "How Many Times do you want to find the table of this number?" <<endl;
	cin >> b;
	string array[b];
	d=0;
	e=b;
	while(array[d]<array[e])
	{
		array[d]={" "};
		d++;
	}
	for (c=1 ; c<=b ; c++)
	{
		cout << a << " x " << c;
		while (array[b]>=array[d])
		{
			cout << array[b];
			b--;
		}
		cout << " = " << a*c << "." <<endl;
	}
	return 0;
}

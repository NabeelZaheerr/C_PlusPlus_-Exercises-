#include <iostream>
using namespace std;
int main()
{
	int a,d,b,breakingstatement=1;
	char c;
	d=1;
	b=-1;
	cout << "How many letters are there in your name?" <<endl;
	cin >> a;
	char array1[a];
	cout << "Write your name. (letters should be separated with space)" <<endl;
	while (d<=a)
	{
	cin >> array1[d];
	d++;
	}
	cout << "Now write any letter to check if it was a part of your name or not." <<endl;
	cin >> c;
	while (b<=a)
	{
	b++;
	if (c==array1[b])
	{
		cout << c << " was a part of your name." <<endl;
		breakingstatement=3;
		break;
	}
	}
	if (breakingstatement != 3)
	{
	cout << c << " was not a part of your name." <<endl;
	}
	return 0;
}

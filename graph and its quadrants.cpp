#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "K22SW015" <<endl;
	cout << "Enter Your X value." <<endl;
	cin >> x;
	cout << "Enter you Y value." <<endl;
	cin >> y;
	if (x<0 && y<0)
	{
		cout << "These Points lie in the 3rd Quadrant!" <<endl;
	}
	else if (x>0 && y>0)
	{
		cout << "These Points lie in the 1st Quadrant!" <<endl;
	}
	else if (x<0 && y>0)
	{
		cout << "These Points lie in the 2nd Quadrant!" <<endl;
	}
	else if (x>0 && y<0)
	{
		cout << "These Points lie in the 4th Quadrant!" <<endl;
	}
return 0;
}

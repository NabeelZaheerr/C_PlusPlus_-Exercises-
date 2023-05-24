#include <iostream>
using namespace std;
int main()
{ int choice;
cout << "K22SW015" <<endl;
cout << "Enter \n1 to find Area Of a Circle. \n2 to find area of a Rectangle \n3 to find the area of a triangle." <<endl;
cin >> choice;
if (choice!=1 && choice !=2 && choice !=3)
{
	cout << "Inavlid Choice." <<endl;
	return 0;
}
else
{
	if (choice==1)
	{
		int r;
		cout << "The radius of the circle is? " <<endl;
		cin >> r;
		cout << "The area of the circle is " << 3.14*(r*r) << "." <<endl;
	}
	else if (choice ==2)
	{
		int w,l;
		cout << "The width of the rectangle is? " <<endl;
		cin >> w;
		cout << "The Length of the rectangle is? " <<endl;
		cin >> l;
		cout << "The area of the Rectangle is " << w*l << "." <<endl;
	}
	else if (choice ==3)
	{
		int h,b;
		cout << "The height of the Triangle is? " <<endl;
		cin >> h;
		cout << "The base of the Triangle is? " <<endl;
		cin >> b;
		cout << "The area of the Triangle is " << 5*b*h << "." <<endl;
	}
}
return 0;
}

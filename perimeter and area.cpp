#include <iostream>
using namespace std;
int main()
{
	int perimeter = 0, area = 0, length = 0, width = 0;
	cout << "This Program would find the Perimeter and Area of the length and width that you input." <<endl;
	cout << "Please Input the length." << endl;
	cin >> length;
	cout << "" <<endl;
	cout << "Please input the Width." << endl;
	cin >> width;
	cout << "" <<endl;
	area = length*width;
	perimeter = 2*(length+width);
	cout << "According to the inputs earlier," <<endl << "The Area would be equal to " << area << "." <<endl;
	cout << "The Perimeter would be equal to " << perimeter << "." <<endl;
	return 0;
}

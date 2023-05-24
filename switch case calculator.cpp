#include <iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	cout << "K22SW015" <<endl;
	cout << "Type your first Number." <<endl;
	cin >> a;
	cout << "Type your Second Number." <<endl;
	cin >> b;
	cout << "Which Operation Do You Want To Perform?" <<endl;
	cout << "X for multiplication \n/ for Division \n+ for Addition \n- for Subtraction \n%for modulus." <<endl;
	cin >> c;
	
	switch (c)
	{
	case '/' :
		cout << a/b <<endl;
		break;
	case 'x' :
		cout << a*b <<endl;
		break;
	case '%' :
		cout << a%b <<endl;
		break;
	case '-' :
		cout << a-b <<endl;
		break;
	case '+' :
		cout << a+b <<endl;
		break;
	default :
		cout << "Invalid Operator!" <<endl;
		break;
	}
		
	return 0;
}

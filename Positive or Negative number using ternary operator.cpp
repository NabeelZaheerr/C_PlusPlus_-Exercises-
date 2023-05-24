#include <iostream> <string>
using namespace std;
int main ()
{
	string answer;
	float n1;
	cout << "This Program is made by Nabeel Zaheer (K22SW015)." <<endl;
	cout << "This Program would tell you if you have input a negative number or a positive number." <<endl;
	while (cin >> n1)
	{
	answer = (n1<0) ? "Negative":(n1>0) ? "Positive":"Zero";
	cout << "The Number is " <<answer << ".\nPlease Try Again." <<endl;
	main();
	}
	return 0;
}

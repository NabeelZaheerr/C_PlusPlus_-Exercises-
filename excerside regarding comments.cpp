#include <iostream>
using namespace std;
int main()
{
cout << "/*" <<endl;
cout << "*/" <<endl;
//cout << /* "*/" */ <<endl; i put the two slashes because it would cause an error without slashes.
cout << /* "*/" /* "/*" */ <<endl;
return 0;
}

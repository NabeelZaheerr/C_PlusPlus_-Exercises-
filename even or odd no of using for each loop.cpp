#include <iostream>
using namespace std;
int main() 
{
	int i,l,count=0;
	cout << "How long of an array do you require?" <<endl;
	cin >> l;
	int a[l];
	cout << "Enter the values of the array." <<endl;
	for (i=0;i<l;i++){
	cin >> a[i];}
	for (int i : a){
		if (i%2!=0)
		count++;}
	cout << "There are only " <<count <<" number of odd elements in the array." <<endl;
	count=0;
	for (int i : a){
		if (i%2==0)
		count++;}
	cout << "There are only " <<count <<" number of even elements in the array." <<endl;
   return 0;
}

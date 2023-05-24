#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e; //decaring variables
	cout << "How many numbers do you want to input." <<endl;
	cin >> c; //taking input
	e=0; //so that we can start saving values in the array one by one.
	int array[c];//declaring array of a desired length.	
	
	//saving the inputs begins.
	
	while (e<c)
	{
	cin >> array[e];
	e++;
	}
	
	//ordering it in ascending order begins.
	
	for (a=0; a<b ; a++)
	{
			for (b=a+1 ; b<c ; b++)
			{
					if (array[a]>array[b])
					{
					d=array[a];
					array[a]=array[b];
					array[b]=d;
					}
		
			}
	}
	

	e=0; //printing begins
	cout << "The Sorted ascending Order is : " << endl;
	while (e<c)
	{
	cout << array[e] << ",";
	e++;
	}
}

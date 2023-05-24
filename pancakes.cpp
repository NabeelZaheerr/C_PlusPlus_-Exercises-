#include <iostream>
using namespace std;
int main()
{
	int e[5];
	int b,a=1,g1,g;
	b=0;
	cout << "K22SW015" <<endl;
	do{
		cout << "How many pancakes did the person " << a << " eat?" <<endl;
		cin >> e[b];
		b++;
		a++;}
	while (a<=5);
	g = e[0];
	int i=0;
	do{ 
	if (e[i] > g) { 
	g = e[i];}
	i++;}
	while (i < 5);
	b=0;
	do{
	if (g==e[b++]){
	g1=b;
	b++;}}
	while (b<5);
	cout << "Person no: " << g1 << " ate the most pancakes, about " << g << " pancake(s)." <<endl;
	g = e[0];
	i=0;
	do { 
	if (e[i] < g) { 
	g = e[i];}
	i++;}
	while (i<5);
	b=0;
	do{
	if (g==e[b++]){
	g1=b;
	b++;}}
	while (b<5);
	cout << "Person no: " << g1 << " ate the least pancakes, about " << g << " pancake(s)." <<endl;
return 0;}

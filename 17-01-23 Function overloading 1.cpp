// Function overloading

#include<iostream>
using namespace std;
int sum(int x, int y)
{
	cout<< x+y <<endl;
}
int sum(int a, int b, int c)
{
	cout<< a+b+c <<endl;
}
double sum(double x, double y)
{
	cout<< x+y <<endl;
}

int main()
{
	sum(10,20);
	sum(10,20),30;
	sum(10.5,20.5);
	return 0;
}

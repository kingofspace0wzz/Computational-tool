#include <iostream>
#include <math.h>
using namespace std;

void f(int n); // n, number of iterations
void g(int n); //Modified to avoid round-off error

void f(int n){
	
	float x = 0.01f;
	for (int i = 0; i < n; ++i)
	{	 
		cout << (1-cos(x))/pow(x,2) << endl;
		x = x/2.0f;
	}
	
}

void g(int n){
	double x = 0.01f;
	for (int i = 0; i < n; ++i)
	{
		cout << "g(x)= " << pow(sin(x),2)/(pow(x,2)*(1+cos(x))) << endl;
		x = x/2.0;
	}
}

int main(){
	cout << "Single precision, lim f(x) " << endl;
	f(30);
	cout << "Modified, lim g(x) " << endl;
	g(30);
	return 0;
}
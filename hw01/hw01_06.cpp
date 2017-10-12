#include <iostream>
#include <math.h>
using namespace std;

float f(int n); // n, number of iterations
double f_d(int n);
float f(int n){
	float x = 0.01f;
	for (int i = 0; i < n; ++i)
	{	
		x = x/2.0f; 
		cout << (1-cos(x))/pow(x,2) << endl;
	}
}
double f_d(int n){
	double x = 0.01;
	for (int i = 0; i < n; ++i)
	{	
		x = x/2.0; 
		cout << (1-cos(x))/pow(x,2) << endl;
	}
}


int main(){
	cout << "Single precision: " << endl;
	f(100);
	
	return 0;
}
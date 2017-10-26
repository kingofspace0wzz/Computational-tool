#include <iostream>
#include <math.h>
using namespace std;

double f(double x);	// function f(x)
double g(double x);	// function g(x)
double fact_double(int x, int y);

double fact_double(int x, int y){
	double result = 1.0;
	for (int i = x; i <= y; i++)
	{
		result = result * i;
	}
	return result;
}
double f(double x){
	return (sqrt(pow(x,2) + 1) - 1)/pow(x,2);
}

double g(double x, int n){
	return 1/((x-1)*(x+1)/(1-cos(x)) + 1/(1-cos(x)));
}

int main(){
	cout << "Function f(x): " << endl;
	for (int i = 1; i <= 15; ++i)
	{
		cout << f(pow(8,-i)) << endl;
	}
	cout << "Function g(x): " << endl;
	for (int i = 1; i <= 15; ++i)
	{
		cout << g(pow(8,-i)) << endl;
	}

	return 0;
}
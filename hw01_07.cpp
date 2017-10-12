#include <iostream>
#include <math.h>
using namespace std;

double f(double x);
double g(double x);

double f(double x){
	return (sqrt(pow(x,2) + 1) - 1)/pow(x,2);
}

double g(double x){
	return 1/(sqrt(pow(x,2) + 1) + 1);
}

int main(){
	cout << "Function f(x): " << endl;
	for (int i = 1; i <= 100; ++i)
	{
		cout << f(pow(8,-i)) << endl;
	}
	cout << "Function g(x): " << endl;
	for (int i = 1; i <= 100; ++i)
	{
		cout << g(pow(8,-i)) << endl;
	}

	return 0;
}
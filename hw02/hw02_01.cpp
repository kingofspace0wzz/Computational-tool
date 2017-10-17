#include <iostream>
#include <math.h>

using namespace std;
// Print the first 40 Fibonacci numbers and its ratios
int main(){
	long int a_i1 = 1;
	long int a_i = 0;
	long int a_i2 = a_i1 + a_i;
	long double quot;
	cout << "Fibonacci number 1: " << a_i << endl;
	cout << "Fibonacci number 2: " <<a_i1 << endl;
	for (int i = 2; i <= 40; ++i)
	{
		cout << "Fibonacci number " << i << ": " 
			<< a_i2 << endl;
		cout << "Ratio: " << (long double)a_i2/a_i1 << endl;
		a_i = a_i1;
		a_i1 = a_i2;
		a_i2 = a_i + a_i1;
	}
	return 0;
}
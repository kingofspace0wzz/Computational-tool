#include <iostream>
#include <math.h>
using namespace std;

long double sum_double(int n, int m); // sum of squares as double
int sum_int(int n, int m);	// sum of squares as int

long double sum_double(int n, int m){
	long double result = 0.0;
	for (int i = n; i <= m; i++)
	{
		result = result + pow(i,2); 
	}
	return result;
}

int sum_int(int n, int m){
	int result = 0;
	for (int i = n; i <= m; i++)
	{
		result = result + pow(i,2); 
	}
	return result;
}

int main(){
	cout << "Sum as int 5000!: " << sum_int(1,5000) << endl;	// sum of squares as int
	cout << "Sum as double 5000!: " << sum_double(1,5000) << endl;	// sum of squares as double
	
}
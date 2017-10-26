#include <iostream>
#include <cmath>

using namespace std;

double trapz_exp(double (*function)(double), double a, double b, int N){
	
	double h = (b-a)/(double)N;
	double I = h/2 * (function(a)+function(b));
	for (int i = 1; i < N; i++){
		I = I + function(a+i*h)*h;
	}
	return I;

}

double exponential(double x){
	return exp(x);
}

int main(){
	int n;
	bool more = true;
	while(more){
		cout << "Enter the number of intervals: " << endl;
		cin >> n;
		if (n % 2 != 0){
			more = false;
			break;
		}
		double I = trapz_exp(exponential, 1, 2, n);
		cout << "I= " << I << " Error= " << abs(exp(2)-exp(1) -I) 
			<< " Number of intervals: " << n << endl;	
	}
}
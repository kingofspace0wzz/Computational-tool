#include <iostream>
#include <math.h>

using namespace std;

double y_root(double a, double b, double tol){
	double xn = (b+a)/2.0;
	double dif = abs((xn - 0));
	while (dif >= tol || abs(b-a) >= tol){
		if (b * xn <= 0 ){
			b = xn;
		}else{
			a = xn;
		}
		xn = (b+a)/2.0;
	}
	return xn;
}


double e_root();

int main(){
	
	cout << y_root(-0.2,1.0,0.0001) << endl;
	return 0;
}
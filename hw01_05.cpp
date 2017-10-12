#include <iostream>
#include <math.h>

using namespace std;

double exp_inv(double x);
long double exp_inv2(int n, double x);

double exp_inv(double x){
	if (x >= 0)
	{
		cout << "Please provide a negative number." << endl;
		exit(1);
	}
	double tol = 0.0001;
	double y = -sizeof(double)/4.0;
	double l = -sizeof(double)/2.0;
	double u = 0;
 	double dif = abs(log(y)-x);
    while ( dif < tol){
    	if (log(y) < x){
    		l = y;
    		y = (y + u)/2.0;
    	}else{
    		u = y;
    		y = (y + l)/2.0;
    	}	
    }
    return y;
}


long double exp_inv2(int n, double x){
	double result = 1.0;
	for (int i = n; i > 0; i--){
		result = 1 + x*result/i;
	}
	return 1/result;
}

int main(){  
  cout << exp(-7) << endl;
  cout << exp_inv(-7) << endl;
  cout << 1/exp(400) << endl;
  cout << exp_inv2(500,400) << endl;

  return 0;
}
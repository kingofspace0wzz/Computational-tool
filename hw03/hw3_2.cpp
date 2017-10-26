#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double const P = 3.1415926535;
	int n = 4;
	double L = 0;
	double Lnew = sqrt(2);
	do
	{
		L = Lnew;
		Lnew = sqrt(2*(1-sqrt(4-pow(L,2))/2.0));
		n = n*2;

	} while (abs(Lnew*n/2.0 - P) > 0.0001);
	cout << "Approximated pi is " << Lnew*n/2.0 << endl;
}
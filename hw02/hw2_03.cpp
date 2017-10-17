#include <iostream>
#include <math.h>

using namespace std;

int main(){

	for (int i = 1; i < 10; ++i)
	{
		double N = pow(10,i);
		double result = 0;
		for (double j = 0; j <= N; ++j)
		{
			result = result + 1.0/N * exp(1.0/N * j);
		}
		cout << "N = 10^" << i << ", I = " << result << endl;
	}

	return 0;
}
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Problem 3, part a
int main(){

	for (int i = 1; i < 10; ++i)
	{
		double N = pow(10,i);
		double result = 0;
		double error = 0;
		double actural = exp(1)-1.0;
		for (double j = 0; j <= N; ++j)
		{	
			double x = ((double)rand() / (RAND_MAX + 1));
			result = result + 1.0/N * exp(x);
		}
		error = abs(actural-result);
		//error = result - exp(1) + 1;
		cout << "N = 10^" << i << ", I = " << result << " error = " << error << endl;

	}

	return 0;
}
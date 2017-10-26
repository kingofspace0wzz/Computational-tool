#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Problem 3, part b
int main(){

	srand(time(0));
	for (int i = 1; i < 10; ++i)
	{
		double N = pow(10,i);
		double result = 0;
		double error = 0;
		double actural = 1;
		for (double j = 0; j <= N; ++j)
		{
			double x = ((double)rand() / (RAND_MAX + 1));
			double y = -log(1-x);
			result = result + 1.0/N * y;
		}
		error = abs(actural-result); 
		cout << "N = 10^" << i << ", I = " << result << " error = " << error << endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;


double l2_norm(double* array, int n){
	double result = 0;
	for (int i = 0; i < n; ++i)
	{
		result = result + pow(abs(array[i]),2) / n;
	}
	result = pow(result, 1/2);
	return result;
}

double l1_norm(double* array, int n){
	double result = 0;
	for (int i = 0; i < n; ++i)
	{
		result = result + abs(array[i]) / n;
	}
	return result;
}

double linf_norm(double* array, int n){
	double result = array[0];
	for (int i = 1; i < n; ++i)
	{
		if (result < array[i])
		{
			result = array[i];
		}
	}
	return result;
}
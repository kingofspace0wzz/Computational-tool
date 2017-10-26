#include <iostream>
#include <math.h>

using namespace std;

double fact_double(int x, int y);
int fact_int(int x);

double fact_double(int x, int y){
	double result = 1.0;
	for (int i = x; i <= y; i++)
	{
		result = result * i;
	}
	return result;
}

int fact_int(int x, int y){
	int result = 1;
	for (int i = x; i <= y; i++)
	{
		result = result * i;
	}
	return result;
}
	

int main(){

	cout << "If compute factorial as int, 20!= " 
		<< fact_int(1,20) << endl;
	cout << "If compute factorial as int, 40!= " 
		<< fact_int(1,40) << endl;	
	cout << "If compute factorial as double, 20!= " 
		<< fact_double(1,20) << endl;
	cout << "If compute factorial as double, 40!= " 
		<< fact_double(1,40) << endl;	

	return 0;
}
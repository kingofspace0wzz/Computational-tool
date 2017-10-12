#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	cout << sizeof(int) << " " << pow(2, sizeof(int)*8)-1 << endl;
	cout << sizeof(double) << " " << pow(2, sizeof(double)*8) << endl;
	cout << sizeof(float) << " " << pow(2, sizeof(float)*8) << endl;
	cout << 2*(pow(2,31)-1) << endl;
	
	return 0;
}
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

double f(double Is1, double Is2, double r1, double r2, double v){
	return Is1*(exp(r1*v)-1) + Is2*(exp(r2*v)-1);
}

int main(){
	int I = 0;
	
	for (int i = 1; i < 5; ++i)
	{
		I = 0.1*i*0.6;

	}

	return 0;
}
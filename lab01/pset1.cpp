#include <iostream>
#include <fstream>
#include <math.h>
#include <cstdlib>

using namespace std;

double f(double x);

double f(double a){
	double x = (double) rand() / (RAND_MAX+1);
	for (int i = 0; i < 1000; ++i)
	{
		x = a * x * (1-x);
	}
	return x;
}


int main(){

	double limit;
	ofstream outfile("data01.txt");

	cout << "Limit point when a in the range[0,4]: " << endl;
	outfile << "Limit point when a in the range[0,4]: " << endl;
	for (double i = 0.0; i <= 4.0; i = i+(4.0/1000.0))
	{
		limit = f(i);
		cout << "Value of a is: " << i 
			<< ". The limit point is: " << limit << endl; 
		outfile << "Value of a is: " << i 
			<< ". The limit point is: " << limit << endl; 	
	}
	
	cout << "Limit point when a in the range[2.6,3.6]: " << endl;
	for (double i = 2.6; i <= 3.6; i = i+(1.0/1000.0))
	{
		limit = f(i);
		cout << "Value of a is: " << i 
			<< ". The limit point is: " << limit << endl;
		outfile << "Value of a is: " << i 
			<< ". The limit point is: " << limit << endl; 
	}

	cout << "Limit point when a in the range[3.5,3.6]: " << endl;
	for (double i = 2.6; i <= 3.6; i = i+(0.1/1000.0))
	{
		limit = f(i);
		cout << "Value of a is: " << i 
			<< ". The limit point is: " << limit << endl;
		outfile << "Value of a is: " << i 
			<< ". The limit point is: " << limit << endl;	 
	}
	outfile.close();
}
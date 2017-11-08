#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int main(){
	int n = 0;
	ifstream infile("current.txt");

	cout << "case " << "Is1 " << "Is2 " << "r1 " << "r2 " << "I0" << endl;
	cout << "1 ";
	while(infile){
		double x;
		infile >> x;
		cout << x << " ";
		if (n == 4){
			cout << endl;
			cout << "2 ";
		}
		n++;
	}


	return 0;
}
#include <iostream>

using namespace std;

int main(){
	float total;
	float x1;
	float x2;
	float average;
	cout << "Please enter a number: ";
	cin >> x1;
	total = total + x1;
	cout << "Please enter another number: ";
	cin >> x2;
	total = total + x2;
	average = total / 2.0;
	cout << "The average of the two numbers is "
		<< average << "\n";
	return 0;
}
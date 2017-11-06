#include <iostream>

using namespace std;

int* array(int n){
	int* a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = 0;
	}
	return a;
}

int** matrix(int n, int m){
	int** a = new int *[n];
	a[0] = new int[n*m];
	for (int i = 0; i < m; ++i)
	{
		a[i] = a[i-1] + m;
	}
	return a;
} 



int main(){
	
	int* a = array(10);
	
	int** m = matrix(10, 20);
	return 0;
}
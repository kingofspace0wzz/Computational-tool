#include <complex>
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	const complex<double> c(0.3, -0.4); // complex number c
	complex<double> z; // complex number z
	const double m = max(abs(c), 2.0);
	ofstream outFile("julia.csv");
	if (!outFile) {
		exit(EXIT_FAILURE);
	}
	for (double i = -2; i < 2; i += 0.004) {
		for (double j = -2; j < 2; j += 0.004) {
			// Initial point
			z = complex<double>(i, j);

			// julia operation for 100 iterations
			for (int k = 0; k < 100; ++k) {
				z = z * z + c; // z(n+1) = z(n)^2 + c
			}
			if (abs(z) <= m) {
				// Print the real and imaginary part into julia.csv
				outFile << i << "," << j << endl;
			}
		}
	}
	outFile.close();
	return 0;
}
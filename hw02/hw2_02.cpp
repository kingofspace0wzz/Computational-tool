#include <complex>
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
	complex<double> c(-1.0, -0.0); // complex number c
	complex<double> z; // complex number z
	double m = max(abs(c), 2.0);
	ofstream outFile("julia1.csv");
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
=======
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
>>>>>>> 1681efefb39e0137eb89a826ece1d273a46be9dd
	outFile.close();

	c = complex<double>(0.360284, 0.100376); // complex number c
	m = max(abs(c), 2.0);
	ofstream outFile2("julia2.csv");
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
				outFile2 << i << "," << j << endl;
			}
		}
	}
	outFile2.close();

	c = complex<double>(-0.1, 0.8); // complex number c
	m = max(abs(c), 2.0);
	ofstream outFile3("julia3.csv");
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
				outFile3 << i << "," << j << endl;
			}
		}
	}
	outFile3.close();

	c = complex<double>(-0.75,0.0); // complex number c
	m = max(abs(c), 2.0);
	ofstream outFile4("julia4.csv");
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
				outFile4 << i << "," << j << endl;
			}
		}
	}
	outFile4.close();

	c = complex<double>(-0.75, 0.1); // complex number c
	m = max(abs(c), 2.0);
	ofstream outFile5("julia5.csv");
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
				outFile5 << i << "," << j << endl;
			}
		}
	}
	outFile5.close();

	c = complex<double>(-0.8, 0.156); // complex number c
	m = max(abs(c), 2.0);
	ofstream outFile6("julia6.csv");
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
				outFile6 << i << "," << j << endl;
			}
		}
	}
	outFile6.close();
	return 0;
}
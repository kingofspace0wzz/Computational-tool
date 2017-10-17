#include <complex>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	
	complex<double> c(0.3, -0.4);
	complex<double> z;

	int count = 0; // for Debugging
	double m = max(abs(c),2.0);
	ofstream outFile( "julia.txt");
	if( !outFile )
    {
        exit(1);
        return -1;
    }
	for (int i = 0; i <= 999; ++i)
	{
		for (int j = 0; j <= 999; ++j)
		{
			z = complex<double> (-2.0 + 4/1000*i, -1.0 + 3/1000*j);
			
			for (int k = 0; k < 100; ++k)
			{
				z = z*z + c;

			}
			count++;
			if (abs(z) <= m)
				outFile << real(z) << " " << imag(z) << endl;
		}
	}
	cout << count << endl;
	cout << m;

	outFile.close();
	return 0;
}
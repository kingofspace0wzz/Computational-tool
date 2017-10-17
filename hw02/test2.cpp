#include <conio.h>
#include <iostream>
#include <math.h>
#include <complex>

using namespace std;

 

int main()
{
    
    
    
	complex<double> c(0.3,-0.4);
    
 
    int x, y, k;            
    for(x = 0; x < 1000; x++)
    {
        for(y = 0; y < 1000; y++)
        {	
			complex<double> z(-2.0 + 4 * (x / 1000.0), -1.0 + 3 * (y / 1000.0));
            for(k = 0; k < 100; k++)
            {
                if ( real(z) * real(z) + imag(z) * imag(z) > 4.0 ) { 
					  break;
				}
                z = z * z + c;
            }
			if ( real(z) * real(z) + imag(z) * imag(z) > 4.0 ) {
				cout << real(z) << " " << imag(z) << endl;
			}
		}
            
     }
	return 0;
}


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "Feigenbaum code" << std::endl;

    double amin, amax;

    std::cout << "Introduce lower end of the interval in [0,4]: ";
    std::cin >> amin;
    std::cout << "Introduce upper end of the interval in [0,4]: ";
    std::cin >> amax;

    if( amax < amin )
    {
        std::cout << "Swapping limits...." << std::endl;
        double tmp = amax;
        amax = amin;
        amin = tmp;
    }

    int const Na = 1000;   // Number of a values
    double da = (amax - amin) / Na;
    double a;
    std::clock_t t1, t2;
    int const Nstab = 1000;    // Number of steps for stabilization
    int const Nplot = 1000;    // Number of dots to be ploted

    t1 = std::clock();
    std::ofstream outFile( "feigenbaum.txt");

    outFile.precision(12);
    outFile << std::scientific;

    if( !outFile )
    {
        std::cout << "Error!" << std::endl;
        return -1;
    }

    for( int i=0; i<=Na; i++ )  // For each value of a we iterate
    {
        a = amin + i*da;

        double x0 = (double) rand() / (RAND_MAX+1);
        for( int j=0; j<Nstab; j++)
            x0 = a*x0*(1.-x0);
        for( int j=0; j<Nplot; j++ )
        {
            x0 = a*x0*(1.-x0);
            outFile << a << " " << x0 << std::endl;
        }
    }
    outFile.close();
    t2 = std::clock();
    std::cout << "Time: " << t2 - t1 << "\n";

    return 0;
}


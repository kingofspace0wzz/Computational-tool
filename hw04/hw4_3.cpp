#include <iostream>
#include <cmath>

using namespace std;

double bisect( double, double, double, double (*)(double ) );
double f1(double);
double f2(double);
double f3(double);


int main(){
	double tol = 1.e-15;
	std::cout.precision(16);

	double root = bisect(0.,1.,tol,&f1);
    std::cout << "Root: " << root << std::endl;
    std::cout << "Value at the root: " << f1(root) << std::endl;

    root = bisect(1.,3.,tol,&f2);
    std::cout << "Root: " << root << std::endl;
    std::cout << "Value at the root: " << f2(root) << std::endl;

    root = bisect(0.,4.,tol,&f3);
    std::cout << "Root: " << root << std::endl;
    std::cout << "Value at the root: " << f3(root) << std::endl;
}

double bisect( double a, double b, double tol, double (*f)(double))
{
    double f0 = f(a);
    double f1 = f(b);
    double xm;

    if( f0*f1 > 0 )
    {
        std::cout << "No change sign in interval ["<<a<<","<<b<<"]!" << std::endl;
        exit(-1);
    }


    do
    {
        xm = 0.5*(a+b);
        double fm = f(xm);

        if( f0*fm <= 0 )
        {
            b = xm;
            f1 = fm;
        }
        else
        {
            a = xm;
            f0 = fm;
        }
    }
    while((b-a) > tol);

    return xm;
}


double f1( double x )
{
    return 1/x - pow(2,x);

}

double f2( double x )
{

    return pow(2,-x) + exp(x) + 2*cos(x) - 6;
}

double f3(double x){
	return (pow(x,3) + 4*pow(x,2) + 3*x + 5) / (2*pow(x,3) - 9*pow(x,2) + 18*x - 2);
}
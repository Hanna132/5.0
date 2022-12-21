// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double p (const double x); 
int main()
{
	double  s;

	cout << "s = "; cin >> s;
	double c = ((pow(p(1 + s * s),2) + (pow(p(1 - s *s* s),3) / (1. + p (10 * s)))));
	cout << "c = " << c << endl;
	return 0;
}
double p(const double x) // визначення
{
	return (1. + sin(x) * sin(x)) ;
}
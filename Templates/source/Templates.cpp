#include <iostream>
#include "Polynomial.h"
#include "Fraction.h"

int main()
{
    int n_int = 5;
    Fraction a(14,10);
    Fraction b(2, 1);
    Fraction c(39, 10);
    Fraction x(1, 10);

    int quad_int = quadratic(0, 2, 9, n_int);
    double d_quad = quadratic(1.4, 2.0, 3.9, 0.1);
    Fraction f = quadratic(a, b, c, x);

    std::cout << quad_int << std::endl;
    std::cout << d_quad << std::endl;
    std::cout << f << std::endl;

    return 0;
}
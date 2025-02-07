#pragma once
#include "Fraction.h"

template <typename T>
T quadratic(T a, T b, T c, T x)
{
    return a*x*x + b*x + c;
};

template int quadratic<int>(int a, int b, int c, int x);
template float quadratic<float>(float a, float b, float c, float x);
template double quadratic<double>(double a, double b, double c, double x);
template Fraction quadratic<Fraction>(Fraction a, Fraction b, Fraction c, Fraction x);  
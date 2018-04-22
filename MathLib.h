#ifndef MATHLIB_H_INCLUDED
#define MATHLIB_H_INCLUDED



#endif // MATHLIB_H_INCLUDED

#include<stdio.h>
#include<string.h>
#include<math.h>


double CalcAdd(double a,double b)
{
    double r = 0.0;
    r = a + b;
    return r;
}

double CalcSub(double a,double b)
{
    double r = 0.0;
    r = a - b;
    return r;
}

double CalcMul(double a,double b)
{
    double r = 0.0;
    r =  a * b;
    return r;
}

double CalcDiv(double a,double b)
{
    double r = 0.0;
    r = a / b;
    return r;
}

double CalcFac(double a)
{
    double r = 1.0;
    double i = 0.0;
    for(i = a, i > 0, i--)
    {
        r = r * i;
    }
    return r;
}

double CalcPow(double a,int b)
{
    double r = 0.0;
    if(b == 0)
    {
        r = 1.0;
        return r;
    }
    if(a == 0)
    {
        r = 0.0;
        return r;
    }
    else if (b < 0)
    {
        fprintf(stderr ,"Error,exponent is not a natural number!")
        return 0;
    }
    else
    {
        r = pow(a,b);
        return r;

    }
}

double CalcNRT(double a, int b)
{
    double r = 0.0;
    if(a < 0)
    {
        fprintf(stderr, "Cannot calculate root of a negative number!")
    }
    else
    {
        r = pow(a, 1/b);
    }
}

double CalcAdditional(double a, double b)
{
    double r = 0.0;
    if(b == 1)
    {
        r = log(a);
        return r;
    }
    else
    {
    r = log(x) / log(b);
    return r;
    }
}

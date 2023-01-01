#include "arithmeticAndLogicOperators.h"
#include "mathFunctions.h"
#include <cmath>

int absolute(int a)
{
    if (a >= 0) {
        return a;
    }
    return (-1) * a;
}

double mySqrt(double a)
{
    return myPow(a, 0.5);
}

double reciprocalFunction(double a)
{
    if (a == 0) {
        throw "Division by zero error.";
    }
    return 1 / a;
}

int factorial(unsigned int a)
{
    if (a == 0) {
        return 1;
    }
    else if (a == 1) {
        return 1;
    }
    else {
        return a * factorial(a - 1);
    }
}

double myPow(double a, int deg)
{
    if ((a != 0 && deg == 0) || a == 1) {
        return 1;
    }

    if (a == 0 && deg == 0) {
        throw "Infinity error.";
    }

    double result = 1;

    if (deg > 0) {
        for (int i = 1; i <= deg; i++) {
            result *= a;
        }
    }

    if (deg < 0) {
        for (int i = -1; i >= deg; i--) {
            result /= a;
        }
    }

    return result;
}

double myPow(double a, double deg)
{
    return pow(a, deg);
}

double mySin(double a)
{
    return sin(a);
}

double myCos(double a)
{
    return cos(a);
}

double myTan(double a)
{
    if (myCos(a) == 0) {
        throw "Undefined";
    }
    return mySin(a) / myCos(a);
}

double mySec(double a)
{
    return reciprocalFunction(myCos(a));
}

double myCsc(double a)
{
    return reciprocalFunction(mySin(a));
}

double myCot(double a)
{
    return reciprocalFunction(myTan(a));
}

double myAsin(double a)
{
    if (absolute(a) > 1) {
        throw "Undefined.";
    }
    return asin(a);
}

double myAcos(double a)
{
    if (absolute(a) > 1) {
        throw "Undefined.";
    }
    return acos(a);
}

double myAtan(double a)
{
    return atan(a);
}

double myAsec(double a)
{
    return myAcos(reciprocalFunction(a));
}

double myAcsc(double a)
{
    return myAsin(reciprocalFunction(a));
}

double myAcot(double a)
{
    return myAtan(reciprocalFunction(a));
}

double mySech(double a)
{
    return reciprocalFunction(myCh(a));
}

double myCsch(double a)
{
    return reciprocalFunction(mySh(a));
}

double myCoth(double a)
{
    return reciprocalFunction(myTh(a));
}

double myAsh(double a)
{
    return asinh(a);
}

double myAch(double a)
{
    return acosh(a);
}

double myAth(double a)
{
    return atan(a);
}

int myFloor(double a)
{
    if (a < 0) {
        return (a / 1) - 1;
    }
    return a / 1;
}

int myCeil(double a)
{
    if (a > 0) {
        return (a / 1) + 1;
    }
    return a / 1;
}

double myPi()
{
    return M_PI;
}

double myE()
{
    return M_E;
}

double mySquare(double a)
{
    return myPow(a, 2);
}

double myMod(double a, double b)
{
    return a - (myFloor(a / b) * b);
}

double myTenDeg(double a)
{
    return myPow(10, a);
}

double myExp(double a, double deg)
{
    return a * myTenDeg(deg);
}

double myLg(double a)
{
    return log10(a);
}

double myLn(double a)
{
    return log(a);
}

double myCube(double a)
{
    return myPow(a, 3);
}

double myCbrt(double a)
{
    return myPow(a, 1 / 3);
}

double myRoot(double a, double b)
{
    return myPow(a, reciprocalFunction(b));
}

double myTwoDeg(double deg)
{
    return pow(2, deg);
}

double myLog(double base, double a)
{
    return myLn(a) / myLn(base);
}

double myEx(double a)
{
    return myPow(myE(), a);
}

double mySh(double a)
{
    return (myEx(a) - myEx(-a)) / 2;
}

double myCh(double a)
{
    return (myEx(a) + myEx(-a)) / 2;
}

double myTh(double a)
{
    return mySh(a) / myCh(a);
}
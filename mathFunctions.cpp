#include "arithmeticAndLogicOperators.h"
#include "mathFunctions.h"
#include <cmath>

int absolute(int a){
    if (a >= 0){
        return a;
    }
    return (-1) * a;
}

double sqrt(double a){
    return myPow(a, 0.5);
}

double reciprocalFunction(double a){
    if (a == 0){
        throw "Division by zero error.";
    }
    return 1 / a;
}

int factorial(unsigned int a){
    if (a == 0){
        return 1;
    } else if(a == 1){
        return 1;
    }else{
        return a * factorial(a - 1);
    }
}

double myPow(double a, int deg){
    if ((a != 0 && deg == 0) || a == 1){
        return 1;
    }

    if (a == 0 && deg == 0){
        throw "Infinity error.";
    }

    double result = 1;

    if (deg > 0){
        for (int i = 1; i <= deg; i++){
            result *= a;
        }
    }

    if (deg < 0){
        for (int i = -1; i >= deg; i--){
            result /= a;
        }
    }

    return result;
}

double myPow(double a, double deg){
    return pow(a, deg);
}

double mySin(double a){
    return sin(a);
}

double myCos(double a){
    return cos(a);
}

double myTan(double a){
    if (myCos(a) == 0){
        throw 'Undefined';
    }
    return mySin(a) / myCos(a);
}

double mySec(double a){
    return reciprocalFunction(myCos(a));
}

double myCsc(double a){
    return reciprocalFunction(mySin(a));
}

double myCot(double a){
    return reciprocalFunction(myTan(a));
}


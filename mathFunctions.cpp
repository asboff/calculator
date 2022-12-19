#include "arithmeticAndLogicOperators.h"

int absolute(int a){
    if (a >= 0){
        return a;
    }
    return -a;
}

//double sqrt(double a){
//
//}

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

double pow(double a, int deg){
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

double pow(double a, double deg){
    double result = 1;
    double adden = 1;
    for (int i = 1; i < 23; i++){
        adden *= (deg - i + 1) * (a - 1);
        result += (adden / factorial(i));
    }
    return result;
}

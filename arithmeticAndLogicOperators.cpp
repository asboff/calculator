#include "arithmeticAndLogicOperators.h"

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if (b == 0) {
        throw "Division by zero error.";
    }
    return a / b;
}

int mod(int a, int b)
{
    if (b == 0) {
        throw "Division by zero error.";
    }
    return a % b;
}

int unaryPlus(int a)
{
    return a;
}

int unaryMinus(int a)
{
    return a * (-1);
}

bool negation(bool a)
{
    return !a;
}

bool conjunction(bool a, bool b)
{
    return a && b;
}

bool disjunction(bool a, bool b)
{
    return a || b;
}

int exclusiveOr(bool a, bool b)
{
    return a ^ b;
}

int conjunctionNegation(bool a, bool b)
{
    return !(a & b);
}

int disjunctionNegation(bool a, bool b)
{
    return !(a | b);
}


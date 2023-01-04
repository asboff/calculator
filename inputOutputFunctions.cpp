#include <iostream>
#include <string>
#include <vector>
#include "inputOutputFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include "mathFunctions.h"

bool isNumber(std::string str)
{
    if (str.find_first_not_of("0123456789.") == -1) {
        return true;
    }
    return false;
}

void calculator()
{
    std::string str;
    std::vector<std::string> operands;

    std::cout << "You can read about the calculator at readme file." << std::endl;
    std::cout << "Enter the operation:";
    while (std::getline(std::cin, str, ' ')) {
        operands.push_back(str);
    }

    if (operands.size() == 1) {
        std::string operation = operands[0];
        std::cout << zeroHandler(operation);
    }
    else if (operands.size() == 2) {
        std::string operation = operands[0];
        if (isNumber(operands[1])) {
            double a = std::stod(operands[1]);
            std::cout << unaryHandler(operation, a);
        }
        else {
            errorMessage();
        }
    }
    else if (operands.size() == 3) {
        std::string operation = operands[1];
        if (isNumber(operands[0]) && isNumber(operands[2])) {
            double a = std::stod(operands[0]);
            double b = std::stod(operands[2]);
            std::cout << doubleHandler(operation, a, b);
        }
        else {
            errorMessage();
        }
    }
    else {
        errorMessage();
    }

}

void errorMessage()
{
    std::cout << "This expression can't be handled. If you believe, this is a mistake, contact me at "
                 "https://github.com/asboff/";
}

double zeroHandler(std::string operation)
{
    if (operation == "pi") {
        return myPi();
    }
    if (operation == "e") {
        return myE();
    }
    errorMessage();
}

double unaryHandler(std::string operation, double a)
{
    if (operation == "+") {
        return unaryPlus(a);
    }
    if (operation == "-") {
        return unaryMinus(a);
    }
    if (operation == "--") {
        return negation(a);
    }
    if (operation == "abs") {
        return absolute(a);
    }
    if (operation == "sqrt") {
        return mySqrt(a);
    }
    if (operation == "~/") {
        return reciprocalFunction(a);
    }
    if (operation == "fact") {
        return factorial(a);
    }
    if (operation == "sin") {
        return mySin(a);
    }
    if (operation == "cos") {
        return myCos(a);
    }
    if (operation == "tg") {
        return myTan(a);
    }
    if (operation == "sec") {
        return mySec(a);
    }
    if (operation == "csc") {
        return myCsc(a);
    }
    if (operation == "ctg") {
        return myCot(a);
    }
    if (operation == "arcsin") {
        return myAsin(a);
    }
    if (operation == "arccos") {
        return myAcos(a);
    }
    if (operation == "arctg") {
        return myAtan(a);
    }
    if (operation == "arcsec") {
        return myAsec(a);
    }
    if (operation == "arccsc") {
        return myAcsc(a);
    }
    if (operation == "arcctg") {
        return myAcot(a);
    }
    if (operation == "sh") {
        return mySh(a);
    }
    if (operation == "ch") {
        return myCh(a);
    }
    if (operation == "th") {
        return myTh(a);
    }
    if (operation == "sech") {
        return mySech(a);
    }
    if (operation == "csch") {
        return myCsch(a);
    }
    if (operation == "ctgh") {
        return myCoth(a);
    }
    if (operation == "arcsh") {
        return myAsh(a);
    }
    if (operation == "arcch") {
        return myAch(a);
    }
    if (operation == "arcth") {
        return myAth(a);
    }
    if (operation == "flr") {
        return myFloor(a);
    }
    if (operation == "ceil") {
        return myCeil(a);
    }
    if (operation == "sqr") {
        return mySquare(a);
    }
    if (operation == "10x") {
        return myTenDeg(a);
    }
    if (operation == "lg") {
        return myLg(a);
    }
    if (operation == "cube") {
        return myCube(a);
    }
    if (operation == "cbrt") {
        return myCbrt(a);
    }
    if (operation == "2x") {
        return myTwoDeg(a);
    }
    if (operation == "ex") {
        return myEx(a);
    }

}

double doubleHandler(std::string operation, double a, double b)
{
    if (operation == "+") {
        return sum(a, b);
    }
    if (operation == "-") {
        return sub(a, b);
    }
    if (operation == "*") {
        return mult(a, b);
    }
    if (operation == "/") {
        return division(a, b);
    }
    if (operation == "mod") {
        return myMod(a, b);
    }
    if (operation == "and") {
        return conjunction(a, b);
    }
    if (operation == "or") {
        return disjunction(a, b);
    }
    if (operation == "xor") {
        return exclusiveOr(a, b);
    }
    if (operation == "nand") {
        return conjunctionNegation(a, b);
    }
    if (operation == "nor") {
        return disjunctionNegation(a, b);
    }
    if (operation == "pow") {
        return myPow(a, b);
    }
    if (operation == "exp") {
        return myExp(a, b);
    }
    if (operation == "root") {
        return myRoot(a, b);
    }
    if (operation == "log") {
        return myLog(a, b);
    }

}
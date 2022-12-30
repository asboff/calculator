#include <iostream>
#include <string>
#include "inputOutputFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include "mathFunctions.h"


void calculator(){
    std::string a = " ";
    std::string b = " ";
    std::string c = " ";

    std::cout << "You can read about the calculator at readme file." << std::endl;
    std::cout << "Enter the operation:";
    std::cin >> a >> b >> c;

    std::cout << a << " " << b << " " << c;

    if (c == " "){
        std::cout << "pon";
    }
}

void errorMessage(){
    std::cout << "This expression can't be handled. If you believe, this is a mistake, contact me at "
                 "https://github.com/asboff/";
}

double zeroHandler(std::string operation){
    if (operation == "pi"){
        return myPi();
    }
    if (operation == "e"){
        return myE();
    }
    errorMessage();
}

double unaryHandler(std::string operation, double a){
    if (operation == "+"){
        return unaryPlus(a);
    }
    if (operation == "-"){
        return unaryMinus(a);
    }
    if (operation == "--"){
        return negation(a);
    }
    if (operation == "abs"){
        return absolute(a);
    }
    if (operation == "sqrt"){
        return mySqrt(a);
    }
    if (operation == "~/"){
        return reciprocalFunction(a);
    }
    if (operation == "fact"){
        return factorial(a);
    }
    if (operation == "sin"){
        return mySin(a);
    }
    if (operation == "cos"){
        return myCos(a);
    }
    if (operation == "tg"){
        return myTan(a);
    }
    if (operation == "sec"){
        return mySec(a);
    }
    if (operation == "csc"){
        return myCsc(a);
    }
    if (operation == "ctg"){
        return myCot(a);
    }
    if (operation == "arcsin"){
        return myAsin(a);
    }
    if (operation == "arccos"){
        return myAcos(a);
    }
    if (operation == "arctg"){
        return myAtan(a);
    }
    if (operation == "arcsec"){
        return myAsec(a);
    }
    if (operation == "arccsc"){
        return myAcsc(a);
    }
    if (operation == "arcctg"){
        return myAcot(a);
    }
    if (operation == "sh"){
        return mySh(a);
    }
    if (operation == "ch"){
        return myCh(a);
    }
    if (operation == "th"){
        return myTh(a);
    }
    if (operation == "sech"){
        return mySech(a);
    }
    if (operation == "csch"){
        return myCsch(a);
    }
    if (operation == "ctgh"){
        return myCoth(a);
    }
    if (operation == "arcsh"){
        return myAsh(a);
    }
    if (operation == "arcch"){
        return myAch(a);
    }
    if (operation == "arcth"){
        return myAth(a);
    }
    if (operation == "flr"){
        return myFloor(a);
    }
    if (operation == "ceil"){
        return myCeil(a);
    }
    if (operation == "sqr"){
        return mySquare(a);
    }
    if (operation == "10x"){
        return myTenDeg(a);
    }
    if (operation == "lg"){
        return myLg(a);
    }
    if (operation == "cube"){
        return myCube(a);
    }
    if (operation == "cbrt"){
        return myCbrt(a);
    }
    if (operation == "2x"){
        return myTwoDeg(a);
    }
    if (operation == "ex"){
        return myEx(a);
    }

}

double doubleHandler(std::string operation, double a, double b){
    if (operation == "+"){
        return sum(a, b);
    }
    if (operation == "-"){
        return sub(a, b);
    }
    if (operation == "*"){
        return mult(a, b);
    }
    if (operation == "/"){
        return division(a, b);
    }
    if (operation == "mod"){
        return myMod(a, b);
    }
    if (operation == "and"){
        return conjunction(a, b);
    }
    if (operation == "or"){
        return disjunction(a, b);
    }
    if (operation == "xor"){
        return exclusiveOr(a, b);
    }
    if (operation == "nand"){
        return conjunctionNegation(a, b);
    }
    if (operation == "nor"){
        return disjunctionNegation(a, b);
    }
    if (operation == "pow"){
        return myPow(a, b);
    }
    if (operation == "exp"){
        return myExp(a, b);
    }
    if (operation == "root"){
        return myRoot(a, b);
    }
    if (operation == "log"){
        return myLog(a, b);
    }

}
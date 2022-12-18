//
// Created by USER on 18.12.2022.
//

#ifndef DEFAULT_H
#define DEFAULT_H
#include <iostream>;


class Default
{
public:
    bool exitSaid;

    void handler();
    void setExitSaid();

    int add(int a, int b);
    int substract(int a, int b);
    int multiply (int a, int b);
    int divide(int a, int b);
};


#endif //DEFAULT_H

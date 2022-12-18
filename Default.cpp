//
// Created by USER on 18.12.2022.
//

#include "Default.h"

bool exitSaid = false;

void Default::handler(){
    if (!exitSaid){
        std::cout << "If you'd like to change the mod or stop the program, enter 'exit'." << std::endl;
        this->setExitSaid();
    }
    std::cout << ">>";
}

void setExitSaid(){
    exitSaid = true;
}

int Default::add(int a, int b){
    return a + b;
}

int Default::substract(int a, int b){
    return a - b;
}

int Default::multiply (int a, int b){
    return a * b;
}

int Default::divide(int a, int b){
    //todo exception for null
    return a / b;
}

//todo перегрузка



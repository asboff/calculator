//
// Created by USER on 18.12.2022.
//

#include <iostream>
#include <string>
#include "Menu.h"

std::string Menu::menu()
{
    std::string mod;

    std::cout << "Choose calculator mod. '>' shows your current mod." << std::endl;
    std::cout << "Type" << std::endl;
    std::cout << "def    for usual mod," << std::endl;
    std::cout << "eng    for engineer mod," << std::endl;
    std::cout << "prg    for programmer mod," << std::endl;
    std::cout << "dat    for date mod," << std::endl;
    std::cout << "stop   to stop the program." << std::endl;
    std::cout << ">>>";

    std::cin >> mod;

    if (mod == "stop"){
        return "0";
    } else if (mod == "def" || mod == "eng" || mod == "prg" || mod == "dat"){
        return mod;
    } else{
        std::cout << "Processing error. Try again." << std::endl;
        mod = "";
        this->menu();
    }
}

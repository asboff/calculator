#include <iostream>
#include <string>
#include "Menu.h"

int main()
{
    Menu menu;
    std::string res;
    res = menu.menu();
    if(res == "0"){
        return 0;
    } else if(res == "def"){
        //todo
        return 0;
    } else if(res == "eng"){
        //todo
        return 0;
    }
    else if(res == "prg"){
        //todo
        return 0;
    }
    else if(res == "dat"){
        //todo
        return 0;
    }
}

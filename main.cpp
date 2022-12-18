#include <iostream>
#include <string>
#include "Menu.h"
#include "Default.h"

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
        //todo handle
        return 0;
    }
    else if(res == "prg"){
        //todo handle
        return 0;
    }
    else if(res == "dat"){
        //todo handle
        return 0;
    }
}

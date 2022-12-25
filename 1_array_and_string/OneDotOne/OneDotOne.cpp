//
// Created by tonyd on 12/24/2022.
//
#include <iostream>
#include "OneDotOne.h"

namespace CtCI {

#define CTCI_ONE_DOT_ONE

#ifdef CTCI_ONE_DOT_ONE
    bool CtCI::OneDotOne::myFoo(){
        std::cout << "here" << std::endl;
        return true;
    }
#endif //CTCI_CTCI_H

} // CtCI
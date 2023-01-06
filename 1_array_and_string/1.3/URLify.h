//
// Created by tonyd on 12/27/2022.
//
#include "../../MyFunction.h"

#ifndef CTCI_URLIFY_H
#define CTCI_URLIFY_H

namespace CtCI{
    class myString_1_3: public MyFunction{
    public:
        int unitTest();
        void URLify_single(char* str, int size);
        string URLify_multiple(string str, int size);
    };
}



#endif //CTCI_URLIFY_H

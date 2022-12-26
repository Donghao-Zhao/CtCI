//
// Created by Donghao on 12/24/2022.
//

#include "../../MyFunction.h"

#ifndef CTCI_IS_UNIQUE_H
#define CTCI_IS_UNIQUE_H

using namespace std;

namespace CtCI {
    class myString_1_1: public MyFunction {
    public:
        bool unitTest();
        static bool isUnique_lowCaseOnly(string str);
        static bool isUnique_boolVector(string str);
        static bool isUnique_bitSet(string str);
    };
} // CtCI

#endif //CTCI_CTCI_H

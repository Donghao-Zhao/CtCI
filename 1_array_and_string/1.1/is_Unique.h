//
// Created by Donghao on 12/24/2022.
//

#ifndef CTCI_IS_UNIQUE_H
#define CTCI_IS_UNIQUE_H

#include "../../include.h"

namespace CtCI {
    class myString_1_1 : public MyFunction {
    public:
        int unitTest() override;

        static bool isUnique_lowCaseOnly(string str);

        static bool isUnique_boolVector(string str);

        static bool isUnique_bitSet(string str);

        static bool isUnique_noDS(string str);
    };
} // CtCI

#endif //CTCI_CTCI_H

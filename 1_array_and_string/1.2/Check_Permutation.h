//
// Created by Donghao on 12/26/2022.
//

#include "../../MyFunction.h"

#ifndef CTCI_CHECK_PERMUTATION_H
#define CTCI_CHECK_PERMUTATION_H

namespace CtCI {
    class myString_1_2: public MyFunction {
    public:
        int unitTest();
        bool checkPermutation_sort(string str1, string str2);
        bool checkPermutation_statistic(string str1, string str2);
    };

} // CtCI

#endif //CTCI_CHECK_PERMUTATION_H

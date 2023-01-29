//
// Created by Donghao on 12/26/2022.
//

#ifndef CTCI_CHECK_PERMUTATION_H
#define CTCI_CHECK_PERMUTATION_H

#include "../../include.h"

namespace CtCI {
    class myString_1_2 : public MyFunction {
    public:
        int unitTest() override;

        bool checkPermutation_sort(string str1, string str2);

        bool checkPermutation_statistic(string str1, string str2);
    };

} // CtCI

#endif //CTCI_CHECK_PERMUTATION_H

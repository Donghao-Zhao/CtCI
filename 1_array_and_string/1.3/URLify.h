//
// Created by Donghao on 12/27/2022.
//

#ifndef CTCI_URLIFY_H
#define CTCI_URLIFY_H

#include "../../include.h"

namespace CtCI {
    class myString_1_3 : public MyFunction {
    public:
        int unitTest() override;

        void URLify_single(char *str, int size);

        string URLify_multiple(string str, int size);
    };
}


#endif //CTCI_URLIFY_H

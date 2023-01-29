//
// Created by Donghao on 1/24/2023.
//

#ifndef CTCI_REMOVE_DUPS_H
#define CTCI_REMOVE_DUPS_H

#include "../../include.h"

namespace CtCI {
    class myString_2_1 : MyFunction {
    public:
        static bool Remove_Dups1(LinkedList::Node *current);

        static bool Remove_Dups2(LinkedList::Node *current);

        int unitTest() override;
    };

} // CtCI

#endif //CTCI_REMOVE_DUPS_H

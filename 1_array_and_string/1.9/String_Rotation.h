//
// Created by Donghao on 1/9/23.
//

#ifndef CTCI_STRING_ROTATION_H
#define CTCI_STRING_ROTATION_H

#include "../../include.h"

namespace CtCI {
    class myString_1_9 : MyFunction {
    public:
        static bool isSubstring(std::string str1str1, std::string str2);

        static bool String_Rotation(string str1, string str2);

        int unitTest() override;
    };

} // CtCI

#endif //CTCI_STRING_ROTATION_H

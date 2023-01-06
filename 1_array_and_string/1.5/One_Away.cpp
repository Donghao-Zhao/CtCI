//
// Created by tonyd on 1/4/2023.
//

#include "One_Away.h"

namespace CtCI {
    bool myString_1_5::One_Way(string str) {
        return 0;
    }

    int myString_1_5::unitTest() {
        vector<string> units = {"tact Coa",
                                "abcd",
                                "aabbccdd"};
        for (auto unit : units){
            cout << unit << ":" << boolalpha << One_Way(unit) << endl;
        }
        return 0;
    }
} // CtCI
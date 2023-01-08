//
// Created by tonyd on 1/4/2023.
//

#include "One_Away.h"

namespace CtCI {
    bool myString_1_5::One_Way(string str1, string str2) {
        if ( abs( (int) (str1.size() - str2.size()) ) > 1 ) return false;

        string longStr = str1.size() > str2.size() ? str1 : str2;
        string shortStr = str1.size() > str2.size() ? str2 : str1;

        int diff = 0;
        int myEqual = 0;

        if (longStr.size() == shortStr.size()) myEqual = 1;

        for (int i = 0; i < longStr.size(); i++){
            if (longStr[i + (diff && !myEqual)] != shortStr[i]) diff ++;
            if (diff > 1) return false;
        }
        if (diff == 0) return false;
        return true;
    }

    int myString_1_5::unitTest() {
        vector<string> unit1 = {"tact",
                                "abc",
                                "abc",
                                "tacta",
                                "abccc",
                                "abcccc"};
        vector<string> unit2 = {"tact",
                                "abd",
                                "abcd",
                                "tact",
                                "abcde",
                                "abcde"};
        for (int i = 0; i < unit1.size(); i++){
            cout << unit1[i] << " " << unit2[i] << ":" << boolalpha << One_Way(unit1[i], unit2[i]) << endl;
        }
        return 0;
    }
} // CtCI
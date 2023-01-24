//
// Created by Donghao Zhao on 1/9/23.
//

#include "String_Rotation.h"

namespace CtCI {
    bool myString_1_9::isSubstring(std::string str1str1, std::string str2) {
        return (str1str1.find(str2) != str1str1.npos);
    }

    bool myString_1_9::String_Rotation(std::string str1, std::string str2) {
        if (str1.size() != str2.size()) return false;
        string str1str1 = str1 + str1;
        return isSubstring(str1str1, str2);
    }

    int myString_1_9::unitTest() {
        vector <string> unit1 = {
                "123",
                "abcd"
        };
        vector <string> unit2 = {
                "312",
                "bcdf"
        };
        for (int i = 0; i < unit1.size(); i++){
            cout << boolalpha << String_Rotation(unit1[i], unit2[i]) << endl;
        }
        return 0;
    }
} // CtCI
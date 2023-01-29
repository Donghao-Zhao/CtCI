//
// Created by Donghao on 1/6/2023.
//

#include "String_Compression.h"

namespace CtCI {
    string myString_1_6::stringCompression(string str) {
        string strNew;
        char c = str[0];
        int count = 1;
        for (int i = 1; i < str.size(); i++) {

            if (str[i] == str[i - 1]) {
                count++;
            } else {
                strNew.push_back(c);
                strNew.append(to_string(count));
                c = str[i];
                count = 1;
            }
        }
        strNew.push_back(c);
        strNew.append(to_string(count));
        if (str.size() <= strNew.size()) return str;
        return strNew;
    }

    int myString_1_6::unitTest() {
        vector<string> units = {
                "aabbcc",
                "aaabbbccc",
                "AAABBBCCD"
        };

        for (int i = 0; i < units.size(); i++) {
            cout << units[i] << ":" << stringCompression(units[i]) << endl;
        }
        return 0;
    }
} // CtCI
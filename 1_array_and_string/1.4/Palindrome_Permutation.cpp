//
// Created by tonyd on 12/27/2022.
//

#include "Palindrome_Permutation.h"

namespace CtCI {
    int ignoreCaseIdx(char c){
        if ('A' <= c && c <= 'Z') return (c - 'A');
        else if ('a' <= c && c <= 'z') return (c - 'a');
        else return -1;
    }

    bool myString_1_4::Palindrome_Permutation(string str) {
        int checker = 0;
        for (int i = 0; i != str.size(); i++){
            int idx = ignoreCaseIdx(str[i]);
            if (idx != -1) checker ^= (1 << idx);
        }
        return (checker & (checker - 1)) == 0;
    }

    bool myString_1_4::unitTest() {
        vector<string> units = {"tact Coa",
                                "abcd",
                                "aabbccdd"};
        for (auto unit : units){
            cout << unit << ":" << boolalpha << Palindrome_Permutation(unit) << endl;
        }
        return 0;
    }
} // CtCI
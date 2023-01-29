//
// Created by Donghao on 12/26/2022.
//

#include "Check_Permutation.h"

#define MAX_SIZE 128

namespace CtCI {
    bool myString_1_2::checkPermutation_sort(string str1, string str2) {
        if (str1.size() != str2.size()) return false;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        for (int i = 0; i != str1.size(); i++) {
            if (str1[i] != str2[i]) return false;
        }
        return true;
    }

    bool myString_1_2::checkPermutation_statistic(string str1, string str2) {
        if (str1.size() != str2.size()) return false;
        vector<int> checker(MAX_SIZE);
        for (int i = 0; i != str1.size(); i++) {
            checker[str1[i]]++;
        }
        for (int i = 0; i != str2.size(); i++) {
            checker[str2[i]]--;
            if (checker[str2[i]] < 0) return false;
        }
        return true;
    }

    int myString_1_2::unitTest() {
        vector<string> unit1 = {"123456",
                                "abcda",
                                "ACCESS"};
        vector<string> unit2 = {"654321",
                                "abcd",
                                "ASSECC"};
        for (int i = 0; i != unit1.size(); i++) {
            cout << unit1[i] << " " << unit2[i] << ": " << boolalpha << checkPermutation_sort(unit1[i], unit2[i])
                 << endl;
            cout << unit1[i] << " " << unit2[i] << ": " << boolalpha << checkPermutation_statistic(unit1[i], unit2[i])
                 << endl;
        }
        return 0;
    }

} // CtCI
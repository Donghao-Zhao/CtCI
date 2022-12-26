//
// Created by tonyd on 12/24/2022.
//

#include "isUnique.h"

using namespace std;

namespace CtCI {
    // If all characters are low case, we use an integer as the indicator
    bool myString_1_1::isUnique_lowCaseOnly(std::string str){
        if (str.length() > 13) return false;
        int checker = 0;
        for (int i = 0; i != str.size(); i++){
            int position = str.at(i) - 'a';
            if (checker & (1 << position)) {
                return false;
            }
            checker |= (1 << position);
        }
        return true;
    }

    // If we use ASCII, then we use a vector of boolean type as the indicator
    bool myString_1_1::isUnique_boolVector(std::string str){
        if (str.length() > 128) return false;
        vector<bool> charSet(128);
        for (int i = 0; i != str.size(); i++){
            int val = str[i];
            if (charSet[val]) {
                return false;
            }
            charSet[val] = true;
        }
        return true;
    }

    //Use bitvector to reduce space usage by a factor of 8
    bool myString_1_1::isUnique_bitSet(string str){
        bitset<256> bits(0);
        for(int i = 0; i != str.size(); i++){
            int val = str[i];
            if (bits.test(val) > 0) return false;
            bits.set(val);
        }
        return true;
    }

    bool myString_1_1::unitTest(){
        vector<std::string> words = {"123456abcdef789ghijklmnopqrstuvwxyz",
                                     "abcda",
                                     "ACCESS"};
        for (auto word : words){
            cout << word << ": " << boolalpha << isUnique_lowCaseOnly(word) << endl;
            cout << word << ": " << boolalpha << isUnique_boolVector(word) << endl;
            cout << word << ": " << boolalpha << isUnique_bitSet(word) << endl;
        }
        return 0;
    }

} // CtCI

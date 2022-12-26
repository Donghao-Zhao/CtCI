//
// Created by Donghao on 12/26/2022.
//

#include "Check_Permutation.h"

using namespace std;

namespace CtCI {
    bool myString_1_2::CheckP(string str){
        cout << "here" << endl;
        return true;
    }

    bool myString_1_2::unitTest(){
        vector<std::string> words = {"123456abcdef789ghijklmnopqrstuvwxyz",
                                     "abcda",
                                     "ACCESS"};
        for (auto word : words){
            cout << word << ": " << boolalpha << CheckP(word) << endl;
        }
        return 0;
    }

} // CtCI
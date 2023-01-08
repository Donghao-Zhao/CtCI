//
// Created by tonyd on 12/27/2022.
//

#include "URLify.h"

namespace CtCI{
    //Operate on the original string, can't work continuously
    void myString_1_3::URLify_single(char* str, int trueLength) {
        int spaceNum = 0;
        for (int i = 0; i != trueLength; i++){
            if (str[i] == ' ') spaceNum++;
        }
        int realNum = trueLength + 2 * spaceNum;
        str[realNum--] = '\0';
        for (int i = trueLength - 1; i >= 0; i--){
            if (str[i] != ' '){
                str[realNum--] = str[i];
            }
            else{
                str[realNum--] = '0';
                str[realNum--] = '2';
                str[realNum--] = '%';
            }
        }
    }

    //Resize the string, can work continuously
    string myString_1_3::URLify_multiple(string str, int trueLength) {
        int spaceNum = 0;

        for (int i = 0; i != trueLength; i++){
            if (str[i] == ' ') spaceNum++;
        }
        int realNum = trueLength + 2 * spaceNum;
        str.resize(realNum);    // This is the only difference
        str[realNum--] = '\0';
        for (int i = trueLength - 1; i >= 0; i--){
            if (str[i] != ' '){
                str[realNum--] = str[i];
            }
            else{
                str[realNum--] = '0';
                str[realNum--] = '2';
                str[realNum--] = '%';
            }
        }
        return str;
    }

    int myString_1_3::unitTest() {

        char strSingle[] = "Mr John Smith    ";
        URLify_single(strSingle, 13);
        cout << strSingle << endl;

        vector <string> unit1 = { "abcd  abcd",
                                 "1234 1234",
                                 ",./, ,./,",
                                 "Mr John Smith    "};
        vector <int> unit2 = { 10,
                                   9,
                                   9,
                                   13};
        for (int i = 0; i != unit1.size(); i++){
            cout << URLify_multiple(unit1[i], unit2[i]) << endl;
        }
        return 0;
    }
}
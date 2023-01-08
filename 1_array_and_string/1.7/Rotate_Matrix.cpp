//
// Created by tonyd on 1/6/2023.
//

#include "Rotate_Matrix.h"

#define DIM 5

namespace CtCI {
    bool myString_1_7::rotateMatrix(int ** matrix) {
        int tmp = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << *((int *)matrix + i*5 + j) << endl;
            }
        }
        return false;
    }

    int myString_1_7::unitTest() {
        int units[DIM][DIM] = {
                1, 2, 3, 4, 5,
                6, 7, 8, 9, 10,
                11, 12, 13, 14, 15,
                16, 17, 18, 19, 20,
                21, 22, 23, 24, 25
        };

        rotateMatrix((int **)(units));

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << *((int *)units + i*5 + j) << endl;
            }
        }

        return 0;
    }
} // CtCI
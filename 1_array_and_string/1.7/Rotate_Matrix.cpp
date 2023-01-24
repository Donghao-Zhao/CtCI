//
// Created by tonyd on 1/6/2023.
//

#include "Rotate_Matrix.h"

#define COLUMN 5
#define END_INDEX (COLUMN - 1)

namespace CtCI {
    bool myString_1_7::rotateMatrix(int ** myMatrix) {
        int tmp = 0;
        for (int i = 0; i != COLUMN / 2; i++) {
            for (int j = i; j != (COLUMN - 1 - i); j++) {
                tmp = *((int *)myMatrix + i * COLUMN + j);   //top to tmp
                *((int *)myMatrix + i * COLUMN + j) = *((int *)myMatrix + (END_INDEX - j) * COLUMN + i);    // top <-- left
                *((int *)myMatrix + (END_INDEX - j) * COLUMN + i) = *((int *)myMatrix + COLUMN * (END_INDEX - i) + (END_INDEX - j)); // left <-- bot
                *((int *)myMatrix + COLUMN * (END_INDEX - i) + (END_INDEX - j)) = *((int *)myMatrix + COLUMN * j + (END_INDEX - i));    // bot <-- right
                *((int *)myMatrix + COLUMN * j + (END_INDEX - i)) = tmp; // right <-- tmp
            }
        }
        return false;
    }

    int myString_1_7::unitTest() {
        int units[COLUMN][COLUMN] = {
                1, 2, 3, 4, 5,
                6, 7, 8, 9, 10,
                11, 12, 13, 14, 15,
                16, 17, 18, 19, 20,
                21, 22, 23, 24, 25
        };

        if (rotateMatrix((int **)(units))){
            cout << "Failed" << endl;
            return 1;
        }



        for (int i = 0; i < COLUMN; i++) {
            for (int j = 0; j < COLUMN; j++) {
                cout << *((int *)units + i * COLUMN + j) << " ";
            }
            cout << endl;
        }

        return 0;
    }
} // CtCI
//
// Created by tonyd on 1/6/2023.
//

#include "Rotate_Matrix.h"

#define COLUMN 5
#define END_INDEX (COLUMN - 1)

namespace CtCI {
    bool myString_1_7::rotateMatrix(int ** matrix) {
        int tmp = 0;
        for (int i = 0; i != COLUMN / 2; i++) {
            for (int j = i; j != (COLUMN - 1 - i); j++) {
                tmp = *((int *)matrix + i * COLUMN + j);   //top to tmp
                *((int *)matrix + i * COLUMN + j) = *((int *)matrix + (END_INDEX - j) * COLUMN + i);    // top <-- left
                *((int *)matrix + (END_INDEX - j) * COLUMN + i) = *((int *)matrix + COLUMN * (END_INDEX - i) + (END_INDEX - j)); // left <-- bot
                *((int *)matrix + COLUMN * (END_INDEX - i) + (END_INDEX - j)) = *((int *)matrix + COLUMN * j + (END_INDEX - i));    // bot <-- right
                *((int *)matrix + COLUMN * j + (END_INDEX - i)) = tmp; // right <-- tmp
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

        rotateMatrix((int **)(units));

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << *((int *)units + i * COLUMN + j) << " ";
            }
            cout << endl;
        }

        return 0;
    }
} // CtCI
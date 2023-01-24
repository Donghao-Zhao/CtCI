//
// Created by Donghao Zhao on 1/9/23.
//

#include "Zero_Matrix.h"

#define ROW 4
#define COLUMN 5

namespace CtCI {
    bool myString_1_8::Zero_Matrix(int **myMatrix, int row, int column) {
        vector <bool> rowTmp(row);
        vector <bool> colTmp(column);

        for (int i = 0; i != row; i++){
            if (rowTmp[i]) continue;
            for (int j = 0; j != column; j++){
                if (colTmp[j]) continue;
                if (!*((int *) myMatrix + column * i + j)){
                    rowTmp [i] = true;
                    colTmp [j] = true;
                }
            }
            cout << endl;
        }

        for (int i = 0; i != row; i++){
            for (int j = 0; j != column; j++){
                if (rowTmp[i] || colTmp[j])
                    *((int *)myMatrix + i * column + j) = 0;
            }
        }
        return false;
    }

    int myString_1_8::unitTest() {
        int units[ROW][COLUMN] = {
                1, 2, 3, 4, 5,
                0, 7, 8, 9, 10,
                11, 12, 13, 14, 15,
                16, 17, 18, 19, 0
        };

        Zero_Matrix((int **)units, ROW, COLUMN);

        for (int i = 0; i != ROW; i++){
            for (int j = 0; j != COLUMN; j++){
                cout << *((int *)units + i * COLUMN + j) << " ";
            }
            cout << endl;
        }

        return 0;
    }
} // CtCI
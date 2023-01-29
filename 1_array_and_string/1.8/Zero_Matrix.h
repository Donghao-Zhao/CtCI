//
// Created by Donghao on 1/9/23.
//

#ifndef CTCI_ZERO_MATRIX_H
#define CTCI_ZERO_MATRIX_H

#include "../../include.h"

namespace CtCI {
    class myString_1_8 : MyFunction {
    public:
        int unitTest() override;

        static bool Zero_Matrix(int **myMatrix, int row, int column);
    };

} // CtCI

#endif //CTCI_ZERO_MATRIX_H

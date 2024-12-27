//
// Created by xpolas on 12/25/24.
//

#ifndef MATRIXOPTIMAZER_H
#define MATRIXOPTIMAZER_H
#include "MatrixChain.h"

class MatrixOptimizer {
public:
    virtual void optimize(MatrixChain& chain) = 0;
    virtual ~MatrixOptimizer() = default;
};

#endif //MATRIXOPTIMAZER_H

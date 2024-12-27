//
// Created by xpolas on 12/25/24.
//

#ifndef OPTIMIZERCOSTBASED_H
#define OPTIMIZERCOSTBASED_H

#include "MatrixOptimizer.h"


class OptimizerCostBased : public MatrixOptimizer{
public:
    void optimize(MatrixChain &chain) override;

};


#endif //OPTIMIZERCOSTBASED_H

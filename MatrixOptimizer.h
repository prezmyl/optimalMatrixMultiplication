//
// Created by xpolas on 12/25/24.
//

#ifndef MATRIXOPTIMAZER_H
#define MATRIXOPTIMAZER_H
#include "MatrixChain.h"

/**
 * @class MatrixOptimizer
 * @brief Interface for matrix chain optimization strategies.
 *
 * This interface defines the contract for any optimization strategy
 * that can be applied to a `MatrixChain` object. Classes implementing
 * this interface must provide a method to optimize the chain.
 */
class MatrixOptimizer {
public:
    /**
     * @brief Optimizes the given matrix chain.
     * @param chain The `MatrixChain` object to be optimized.
     *
     * This method should implement the logic for finding the optimal
     * multiplication order for the matrices in the chain.
     */
    virtual void optimize(MatrixChain& chain) = 0;

    /**
     * @brief Virtual destructor.
     */
    virtual ~MatrixOptimizer() = default;
};


#endif //MATRIXOPTIMAZER_H

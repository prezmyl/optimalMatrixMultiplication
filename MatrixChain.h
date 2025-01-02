/**
* @file MatrixChain.h
 * @brief Declaration of the MatrixChain class for matrix chain multiplication optimization.
 *
 * The MatrixChain class manages a sequence of matrices and provides methods to calculate
 * the optimal multiplication order and its associated cost using dynamic programming.
 */

#ifndef MATRIXCHAIN_H
#define MATRIXCHAIN_H

#include "Matrix.h"
#include <vector>
#include <string>

/**
 * @class MatrixChain
 * @brief Represents a sequence of matrices and provides methods for optimization.
 * The class uses dynamic programming to calculate the optimal multiplication
 * order for a chain of matrices. It computes tables for costs and splits to
 * determine the most efficient parenthesization.
 */
class MatrixChain {
private:
    std::vector<Matrix> matrices; ///< Sequence of matrices.
    std::vector<std::vector<int>> multiplicationTable; ///< Dynamic programming table for multiplication costs.
    std::vector<std::vector<int>> splitsTable; ///< Table to track optimal split points.

public:
    /**
     * @brief Adds a matrix to the chain.
     * @param matrix The matrix to add.
     */
    void addMatrix(const Matrix& matrix);

    /**
     * @brief Calculates the optimal multiplication order and cost using dynamic programming.
     *
     * This method fills the multiplication and split tables with the minimal number of scalar
     * multiplications required for each subchain of matrices.
     */
    void calculateTables();

    /**
     * @brief Retrieves the optimal parenthesization of the matrix chain.
     * @return A string representation of the optimal parenthesization.
     */
    std::string getOptimalParenthesization() const;

    /**
     * @brief Retrieves the cost of the optimal multiplication order.
     * @return The minimum cost of matrix multiplication.
     */
    int getOptimalCost();
};

#endif // MATRIXCHAIN_H

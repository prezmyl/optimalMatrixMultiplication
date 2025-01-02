/**
* @file main.cpp
 * @brief Entry point for the Matrix Chain Optimization program.
 *
 * This program calculates the optimal multiplication order for a sequence of matrices
 * using dynamic programming. The main steps include reading input matrix dimensions,
 * calculating the cost of all possible parenthesizations, and outputting the optimal order
 * and its cost. It uses a cost-based optimization approach implemented in the MatrixChain
 * and OptimizerCostBased classes.
 *
 * Usage:
 *   ./optimalMultiplicMatrices <input_file>
 *
 * The input file should contain matrix dimensions in the format:
 *   <dim1> <dim2> ... <dimN>
 *
 * Each line represents a chain of matrices with corresponding dimensions as followed
 *      dimA -> dim1 x dim2
 *      dimB -> dim2 x dim3 ...to ensure multiplication critterium for 2 matrices
 *
 * The program outputs:
 * - Optimal parenthesization of the matrix chain.
 * - Minimum cost of matrix multiplications.
 */

#include "MatrixController.h"
#include "OptimizerCostBased.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    try {
        // Create optimizer and controller
        OptimizerCostBased optimizer;
        MatrixController controller(optimizer);

        // Process input file
        controller.processFile(argv[1]);

        // Output results
        controller.outputResult();
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}

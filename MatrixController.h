/**
* @file MatrixController.h
 * @brief Declaration of the MatrixController class for managing matrix chain optimization.
 *
 * The MatrixController class orchestrates reading input, performing optimization,
 * and outputting the results. It acts as a bridge between the input, processing, and output.
 */

#ifndef MATRIXCONTROLLER_H
#define MATRIXCONTROLLER_H

#include "MatrixChain.h"
#include "MatrixOptimizer.h"
#include "InputReader.h"
#include "OutputWriter.h"
#include "OptimizerCostBased.h"
#include <string>
#include <vector>

/**
 * @class MatrixController
 * @brief Manages the workflow of reading input, optimizing, and outputting results.
 */
class MatrixController {
private:
    MatrixChain chain; ///< The matrix chain to be optimized.
    MatrixOptimizer &optimizer; ///< The optimizer used for cost-based optimization.
    std::vector<std::string> results; ///< Stores the results of the optimization.

public:
    /**
     * @brief Constructs a MatrixController with the specified optimizer.
     * @param optimizer The optimizer to use for matrix chain optimization.
     */
    MatrixController(MatrixOptimizer& optimizer);

    /**
     * @brief Processes an input file containing matrix dimensions.
     *
     * Reads each line from the file, constructs matrix chains, and optimizes them.
     *
     * @param inputFile The name of the input file.
     * @throws std::runtime_error if the file cannot be opened.
     */
    void processFile(const std::string &inputFile);

    /**
     * @brief Processes a single line of input containing matrix dimensions.
     *
     * Parses the input line, constructs a MatrixChain, and optimizes it.
     *
     * @param input A line of input containing matrix dimensions.
     */
    void processInput(const std::string& input);

    /**
     * @brief Outputs the results of the optimization to the standard output.
     */
    void outputResult();
};

#endif // MATRIXCONTROLLER_H

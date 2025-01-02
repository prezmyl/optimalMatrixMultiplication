//
// Created by xpolas on 12/25/24.
//

#ifndef OUTPUTWRITER_H
#define OUTPUTWRITER_H

#include "MatrixChain.h"
#include <string>
#include <sstream>

/**
 * @class OutputWriter
 * @brief Generates and outputs the results of matrix chain optimization.
 *
 * This class provides utility methods to format the results of the matrix
 * chain optimization and output them to the standard output or other destinations.
 */
class OutputWriter {
public:
    /**
     * @brief Generates a formatted string with the optimization results.
     * @param chain The `MatrixChain` object containing the optimization results.
     * @return A string representation of the optimal parenthesization and cost.
     */
    static std::string generateOutput(MatrixChain& chain);

    /**
     * @brief Outputs the optimization results to the standard output.
     * @param chain The `MatrixChain` object containing the optimization results.
     */
    static void writeToStandardOutput(MatrixChain& chain);
};




#endif //OUTPUTWRITER_H

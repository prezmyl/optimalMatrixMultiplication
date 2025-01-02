/**
* @file InputReader.h
 * @brief Declaration of the InputReader class for reading matrix chains from files.
 *
 * The InputReader class provides static methods to parse input files and construct
 * MatrixChain objects based on the provided matrix dimensions.
 */

#ifndef INPUTREADER_H
#define INPUTREADER_H

#include "MatrixChain.h"
#include <string>

/**
 * @class InputReader
 * @brief Reads and parses input files to construct MatrixChain objects.
 */
class InputReader {
public:
    /**
     * @brief Reads matrix dimensions from a file and constructs a MatrixChain.
     *
     * The file should contain matrix dimensions on each line, where each line
     * specifies a sequence of dimensions for a matrix chain.
     *
     * @param filename The name of the input file.
     * @return A MatrixChain object constructed from the input file.
     * @throws std::runtime_error if the file cannot be opened or parsed.
     */
    static MatrixChain readFromFile(const std::string& filename);
};

#endif // INPUTREADER_H

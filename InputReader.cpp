//
// Created by xpolas on 12/25/24.
//

#include "InputReader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

MatrixChain InputReader::readFromFile(const std::string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw runtime_error("Could not open file " + filename);
    }

    MatrixChain chain;
    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        int rows, cols;
        while (iss >> rows >> cols) {
            chain.addMatrix(Matrix(rows, cols));
        }
    }
    return chain;
}

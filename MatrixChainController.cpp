//
// Created by xpolas on 12/27/24.
//
#include "MatrixChainController.h"
#include "MatrixChain.h"
#include "InputReader.h"
#include "OutputWriter.h"
#include "OptimizerCostBased.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

void MatrixChainController::processFile(const std::string &inputFile) {
    ifstream file(inputFile);
    if (!file.is_open()) {
        throw runtime_error("Unable to open file: " + inputFile);
    }

    string line;
    while (getline(file, line)) {
        vector<int> dimensions;
        istringstream iss(line);
        int dim;
        while (iss >> dim) {
            dimensions.push_back(dim);
        }

        if (dimensions.size() < 2) {
            cerr << "Invalid input line: " << line << endl;
            continue;
        }

        MatrixChain chain;
        for (size_t i = 0; i < dimensions.size() - 1; ++i) {
            chain.addMatrix(Matrix(dimensions[i], dimensions[i + 1]));
        }

        OptimizerCostBased optimizer;
        optimizer.optimize(chain);

        OutputWriter::writeToStandardOutput(chain);
    }
}
//
// Created by xpolas on 12/27/24.
//

#include "MatrixController.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

MatrixController::MatrixController(MatrixOptimizer &optimizer) : optimizer(optimizer) {}

void MatrixController::processFile(const string& inputFile) {
    ifstream file(inputFile);
    if (!file.is_open()) {
        throw runtime_error("Unable to open file: " + inputFile);
    }

    string line;
    while (getline(file, line)) {
        processInput(line);
    }
}

void MatrixController::processInput(const string& input) {
    istringstream iss(input);
    vector<int> dimensions;
    int dim;
    while (iss >> dim) {
        dimensions.push_back(dim);
    }

    if (dimensions.size() < 2) {
        cerr << "Invalid input: " << input << endl;
        return;
    }

    chain = MatrixChain();
    for (size_t i = 0; i < dimensions.size() - 1; ++i) {
        chain.addMatrix(Matrix(dimensions[i], dimensions[i + 1]));
    }

    optimizer.optimize(chain);


    results.push_back(OutputWriter::generateOutput(chain));
}

void MatrixController::outputResult() {
    for (const auto& result : results) {
        cout << result << "\n";
    }
}

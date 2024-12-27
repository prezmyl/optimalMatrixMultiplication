//
// Created by xpolas on 12/27/24.
//

#include "MatrixController.h"

MatrixController::MatrixController(MatrixOptimizer &optimizer) : optimizer(optimizer) {}



void MatrixController::processInput(const std::string &input) {
    chain = InputReader::readFromFile(input);
    optimizer.optimize(chain);
}

void MatrixController::outputResult() {
    OutputWriter::writeToStandardOutput(chain);
}

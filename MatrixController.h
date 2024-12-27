//
// Created by xpolas on 12/27/24.
//

#ifndef MATRIXCONTROLLER_H
#define MATRIXCONTROLLER_H

#include "MatrixChain.h"
#include "MatrixOptimizer.h"
#include "InputReader.h"
#include "OutputWriter.h"
#include <string>

#include "OptimizerCostBased.h"


class MatrixController {
private:
    MatrixChain chain;
    MatrixOptimizer &optimizer;
    std::vector<std::string> results;

public:
    MatrixController(MatrixOptimizer& optimizer);
    void processFile(const std::string &inputFile);
    void processInput(const std::string& input);
    void outputResult();

};



#endif //MATRIXCONTROLLER_H

//
// Created by xpolas on 12/25/24.
//

#include "OutputWriter.h"
#include <iostream>

using namespace std;



string OutputWriter::generateOutput(MatrixChain &chain) {
        ostringstream oss;
        oss << "Optimal Parenthesization: " << chain.getOptimalParenthesization() << "\n";
        oss << "Optimal Cost: " << chain.getOptimalCost() << "\n";
        return oss.str();
}

void OutputWriter::writeToStandardOutput(MatrixChain &chain) {
        std::cout << generateOutput(chain);
}

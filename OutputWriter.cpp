//
// Created by xpolas on 12/25/24.
//

#include "OutputWriter.h"
#include <iostream>

using namespace std;

void OutputWriter::writeToStandardOutput(MatrixChain &chain) {
    cout << "Optimal Parenthesization: " << chain.getOptimalParenthesization() << "\n";
    cout << "Optimal Cost: " << chain.getOptimalCost() << "\n\n";
}

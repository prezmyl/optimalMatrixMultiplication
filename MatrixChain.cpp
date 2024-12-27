//
// Created by xpolas on 12/25/24.
//

#include "MatrixChain.h"
#include <limits>
#include <sstream>
#include <functional>

using namespace std;

void MatrixChain::calculateTables() {
    int n = matrices.size();
    this->multiplicationTable.assign(n, vector<int>(n, 0));
    this->splitsTable.assign(n, vector<int>(n, -1));

    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            multiplicationTable[i][j] = numeric_limits<int>::max();
            for (int k = i; k < j; ++k) {
                int cost = multiplicationTable[i][k] + multiplicationTable[k + 1][j] +
                    matrices[i].rows * matrices[k].collumns * matrices[j].collumns;
                if (cost < multiplicationTable[i][j]) {
                    multiplicationTable[i][j] = cost;
                    splitsTable[i][j] = k;
                }
            }
        }
    }
}

void MatrixChain::addMatrix(const Matrix &matrix) {
    this->matrices.push_back(matrix);
}

string MatrixChain::getOptimalParenthesization() const {
    function<string(int, int)> construct = [&] (int i, int j ) -> string {
        if (i == j) return "A_" + to_string(i);
        int k = splitsTable[i][j];
        return "(" + construct(i, k) + " " + construct(k + 1, j) + ")";
    };
    return construct(0, matrices.size() - 1);
}


int MatrixChain::getOptimalCost() {
    return multiplicationTable[0][matrices.size() - 1];
}

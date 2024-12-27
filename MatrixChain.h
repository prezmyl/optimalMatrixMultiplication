//
// Created by xpolas on 12/25/24.
//

#ifndef MATRIXCHAIN_H
#define MATRIXCHAIN_H

#include "Matrix.h"
#include <vector>



class MatrixChain {
private:
    std::vector<Matrix> matrices;
    std::vector<std::vector <int>> multiplicationTable;
    std::vector<std::vector <int>> splitsTable;



public:
    void addMatrix(const Matrix& matrix);
    void calculateTables();
    std::string getOptimalParenthesization() const;
    int getOptimalCost();


};


#endif //MATRIXCHAIN_H

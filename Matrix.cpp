//
// Created by xpolas on 12/25/24.
//

#include "Matrix.h"
#include <sstream>

using namespace std;

Matrix::Matrix(int rows, int collumns) : rows(rows), collumns(collumns) {}

std::string Matrix::getDimension() const {
    ostringstream oss;
    oss << rows << "x" << collumns;
    return oss.str();
}

bool Matrix::canMultiplyWith(const Matrix &other) const {
    return this->collumns == other.rows;
}

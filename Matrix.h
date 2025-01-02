//
// Created by xpolas on 12/25/24.
//

#ifndef MATRIX_H
#define MATRIX_H
#include <string>


/**
 *
 */
class Matrix {
public:
    int rows, collumns;

    Matrix(int rows, int collumns);
    std::string getDimension() const;
    bool canMultiplyWith(const Matrix &other) const;

};



#endif

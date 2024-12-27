//
// Created by xpolas on 12/25/24.
//

#ifndef INPUTREADER_H
#define INPUTREADER_H

#include "MatrixChain.h"
#include <string>

class InputReader {
public:
    static MatrixChain readFromFile(const std::string& filename);
};


#endif //INPUTREADER_H

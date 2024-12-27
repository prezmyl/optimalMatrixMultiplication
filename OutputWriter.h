//
// Created by xpolas on 12/25/24.
//

#ifndef OUTPUTWRITER_H
#define OUTPUTWRITER_H

#include "MatrixChain.h"
#include <string>
#include <sstream>


class OutputWriter {
public:
    static std::string generateOutput(MatrixChain& chain);
    static void writeToStandardOutput(MatrixChain& chain);
};



#endif //OUTPUTWRITER_H

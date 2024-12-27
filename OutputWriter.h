//
// Created by xpolas on 12/25/24.
//

#ifndef OUTPUTWRITER_H
#define OUTPUTWRITER_H

#include "MatrixChain.h"
#include <string>


class OutputWriter {
public:
    static void writeToStandardOutput(MatrixChain& chain);
};



#endif //OUTPUTWRITER_H

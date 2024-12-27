cmake_minimum_required(VERSION 3.29)
project(optimalMultiplicMatrices)

set(CMAKE_CXX_STANDARD 20)

add_executable(optimalMultiplicMatrices main.cpp
        Matrix.cpp
        Matrix.h
        MatrixChain.cpp
        MatrixChain.h
        MatrixOptimizer.h
        OptimizerCostBased.cpp
        OptimizerCostBased.h
        InputReader.cpp
        InputReader.h
        OutputWriter.cpp
        OutputWriter.h
        MatrixController.cpp
        MatrixController.h
)

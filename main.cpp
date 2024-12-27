#include <iostream>
#include "MatrixController.h"
#include "OptimizerCostBased.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    const std::string inputFile = argv[1];

    try {
        OptimizerCostBased optimizer;
        MatrixController controller(optimizer);

        controller.processInput(inputFile);
        controller.outputResult();
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

#include "MatrixController.h"
#include "OptimizerCostBased.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    try {
        OptimizerCostBased optimizer;
        MatrixController controller(optimizer);
        controller.processFile(argv[1]);
        controller.outputResult();
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}

#include <iostream>
#include "Network.h"

int main(int argc, char **argv) {
    Network network;
    if (argc != 2) {
        std::cout << "Number of parameters must be equal to 2 (input respectively)" << std::endl;
    } else {
        network.read(argv[1]);
        network.placeAntennas();
        network.print();
    }
    return 0;
}
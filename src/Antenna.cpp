#include <sstream>
#include "Antenna.h"

int Antenna::getRange() const {
    return range;
}

int Antenna::getConnectionSpeed() const {
    return connectionSpeed;
}

void Antenna::read(std::istringstream &ss) {
    ss >> range >> connectionSpeed;
}

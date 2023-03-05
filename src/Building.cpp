#include <sstream>
#include "Building.h"

const std::pair<int, int> &Building::getPositionGrid() const {
    return positionGrid;
}

int Building::getLatencyWeight() const {
    return latencyWeight;
}

int Building::getConnectionSpeedWeight() const {
    return connectionSpeedWeight;
}

void Building::read(std::istringstream &ss) {
    ss >> positionGrid.first >> positionGrid.second >> latencyWeight >> connectionSpeedWeight;
}


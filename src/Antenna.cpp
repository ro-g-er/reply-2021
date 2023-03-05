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

const std::pair<int, int> &Antenna::getPosition() const {
    return position;
}

void Antenna::setPosition(const std::pair<int, int> &position) {
    Antenna::position = position;
}

Antenna::Antenna() : maxScore() {}

int Antenna::getMaxScore() const {
    return maxScore;
}

void Antenna::setMaxScore(int maxScore) {
    Antenna::maxScore = maxScore;
}

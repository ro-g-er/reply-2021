#ifndef REPLY_2021_BUILDING_H
#define REPLY_2021_BUILDING_H


#include <utility>

class Building {
private:
    std::pair<int, int> positionGrid;
    int latencyWeight;
    int connectionSpeedWeight;
public:
    const std::pair<int, int> &getPositionGrid() const;
    int getLatencyWeight() const;
    int getConnectionSpeedWeight() const;
    void read(std::istringstream &ss);
};


#endif //REPLY_2021_BUILDING_H

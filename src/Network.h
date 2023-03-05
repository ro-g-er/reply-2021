#ifndef REPLY_2021_NETWORK_H
#define REPLY_2021_NETWORK_H

#include <vector>
#include "Building.h"
#include "Antenna.h"

class Network {
private:
    std::pair<int, int> grid;
    std::vector<Building> buildings;
    std::vector<Antenna> antennas;
    int reward;
public:
    void read(const std::string &nameFile);
    const std::pair<int, int> &getGrid() const;
    void print();
    void placeAntennas();
};

#endif //REPLY_2021_NETWORK_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Network.h"

void Network::placeAntennas() {
    for (auto &a: antennas) {
        for (auto b: buildings) {
            for (int i{}; i < grid.first; i++) {
                for (int j{}; j < grid.second; j++) {
                    int score = a.getConnectionSpeed() * b.getConnectionSpeedWeight() - b.getLatencyWeight() * abs((b.getPositionGrid().first - i) + (b.getPositionGrid().second - j) );
                    if (score > a.getMaxScore()) {
                        a.setMaxScore(score);
                        a.setPosition(std::make_pair(i, j));
                    }
                }
            }
        }
    }
}

void Network::read(const std::string &nameFile) {
    std::ifstream myFile;
    myFile.open(nameFile, std::ios::in);
    if (!myFile.is_open()) {
        std::cout << "Reading of " << nameFile << "failed";
        return;
    }
    std::string line;
    std::getline(myFile, line);
    std::istringstream ss(line);
    ss >> grid.first >> grid.second;
    std::getline(myFile, line);
    ss.clear();
    ss.str(line);
    int numBuildings {};
    int numAntennas {};
    ss >> numBuildings >> numAntennas >> reward;
    for (int i {}; i<numBuildings; i++) {
        std::getline(myFile, line);
        ss.clear();
        ss.str(line);
        Building building;
        building.read(ss);
        buildings.emplace_back(building);
    }
    for (int i {}; i<numAntennas; i++) {
        std::getline(myFile, line);
        ss.clear();
        ss.str(line);
        Antenna antenna;
        antenna.read(ss);
        antennas.emplace_back(antenna);
    }
    myFile.close();
}

const std::pair<int, int> &Network::getGrid() const {
    return grid;
}

void Network::print() {
    std::cout << "Width: "<< grid.first << " Height: "<< grid.second << std::endl;
    std::cout << "Reward: "<< reward << std::endl;
    for (auto b: buildings) {
        std::cout << "Position of Building: " << std::endl;
        std::cout << "X: " << b.getPositionGrid().first << " Y: " << b.getPositionGrid().second << std::endl;
        std::cout << "Latency Weight: " << b.getLatencyWeight() << std::endl;
        std::cout << "Connection Speed Weight: " << b.getConnectionSpeedWeight() << std::endl;
    }
    for (auto a: antennas) {
        std::cout << "Range of antenna: " << a.getRange() << std::endl;
        std::cout << "Connection Speed: " << a.getConnectionSpeed() << std::endl;
        std::cout << "Position: " << a.getPosition().first << ", " << a.getPosition().second << std::endl;
        std::cout << "Maximum score: " << a.getMaxScore() << std::endl;
    }
}


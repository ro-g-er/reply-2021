#ifndef REPLY_2021_ANTENNA_H
#define REPLY_2021_ANTENNA_H


#include <string>

class Antenna {
private:
    int range;
    int connectionSpeed;
    std::pair <int,int> position;
    int maxScore;
public:
    explicit Antenna();
    const std::pair<int, int> &getPosition() const;
    void setPosition(const std::pair<int, int> &position);
    int getRange() const;
    int getConnectionSpeed() const;
    void read(std::istringstream &ss);

    int getMaxScore() const;

    void setMaxScore(int maxScore);
};


#endif //REPLY_2021_ANTENNA_H

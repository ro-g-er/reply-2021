#ifndef REPLY_2021_ANTENNA_H
#define REPLY_2021_ANTENNA_H


#include <string>

class Antenna {
private:
    int range;
    int connectionSpeed;
public:
    int getRange() const;
    int getConnectionSpeed() const;
    void read(std::istringstream &ss);
};


#endif //REPLY_2021_ANTENNA_H

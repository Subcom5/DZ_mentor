#ifndef TRACK_H
#define TRACK_H

#include "car.h"
#include <string>

class Track :  public Car {

private:
    int loadCapacity = 20;

public:
    void toString(std::string name, std::string gender, int experience);
    std::string getBrandTrack() {return "Kamaz";};
    std::string getModelTrack() {return "5350";};
    int getWeightTrack() {return 20;};
    int getMaxSpeedTrack(){return 100;};
};

#endif // TRACK_H

#ifndef RACINGCAR_H
#define RACINGCAR_H

#include "car.h"


class RacingCar : public Car
{
    int afterburner = 120;

public:
    void toString(std::string name, std::string gender, int experience);
    std::string getBrandBalid() {return "Ferrari";};
    std::string getModelBalid() {return "F550i";};
    int getWeightBalid() {return 1;};
    int getMaxSpeedBalid(){return 250 + afterburner;};

};

#endif // RACINGCAR_H

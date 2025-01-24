#include "track.h"

#include <iostream>
using std::cout, std::endl;


void Track::toString(std::string name, std::string gender, int experience)
{
    // Информация по водителю
    Track::Car::driver.SetName(name);
    Track::Car::driver.SetGender(gender);
    Track::Car::driver.SetExperience(experience);
    Track::Car::driver.toString(name, gender, experience);

    // Информация по авто
    Track::SetBrand(getBrandTrack());
    Track::SetModel(getModelTrack());
    Track::SetWight(getWeightTrack());
    Track::SetMaxCarSpeed(getMaxSpeedTrack());
    Track::Car::toString();

    // Информация по мотору
    engine.toStringTrack();

    // Дополнительные параметры по грузовику
    cout << "\n\t~~~Дополнительные параметры: ~~~" << endl;
    cout << "1. Грузоподъемность: \t\t" << loadCapacity << " тонн" << endl;
}

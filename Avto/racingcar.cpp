#include "racingcar.h"

#include <iostream>
using std::cout, std::endl;


void RacingCar::toString(std::string name, std::string gender, int experience)
{
    // Информация по водителю
    RacingCar::Car::driver.SetName(name);
    RacingCar::Car::driver.SetGender(gender);
    RacingCar::Car::driver.SetExperience(experience);
    RacingCar::Car::driver.toString(name, gender, experience);

    // Информация по авто
    RacingCar::SetBrand(getBrandBalid());
    RacingCar::SetModel(getModelBalid());
    RacingCar::SetWight(getWeightBalid());
    RacingCar::SetMaxCarSpeed(getMaxSpeedBalid());
    RacingCar::Car::toString();

    // Информация по мотору
    engine.toStringBalid();

    // Дополнительные параметры по грузовику
    cout << "\n\t~~~Дополнительные параметры: ~~~" << endl;
    cout << "1. Форсаж: \t\t\t" << afterburner << " км/ч" << endl;

}

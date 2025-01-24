#ifndef DRIVER_H
#define DRIVER_H

#include <string>

class Driver
{
private:
    std::string name;
    std::string gender;
    int experience;

public:
    void toString(std::string name, std::string gender, int experience);
    void SetName(std::string name){this->name = name;};
    void SetGender(std::string gender){this->gender = gender;};
    void SetExperience(int experience){this->experience = experience;};

};

#endif // DRIVER_H

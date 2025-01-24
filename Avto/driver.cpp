#include "driver.h"

#include <iostream>
using std::cout, std::endl;


void Driver::toString(std::string name, std::string gender, int experience)
{
    cout << "\n\t~~~Данные водителя~~~" << endl;
    cout << "1. Имя: \t\t\t" << name << endl;
    cout << "2. Пол: \t\t\t" << gender << endl;
    cout << "3. Стаж вождения: \t\t" << experience << endl;
}

#ifndef CAR_H
#define CAR_H

#include "driver.h"
#include "engine.h"

#include <string>

class Car
{
protected:
    std::string brand;          //< марка авто
    std::string model;          //< модель авто
    int weight;                 //< вес авто
    Driver driver;              //< данные водителя
    int maxCarSpeed;            //< максимальная скорость
    Engine engine;              //< данные двигателя
    bool validateEngine{false}; //< проверка работы двигателя

public:
    int currentSpeed;
    /*!
     * \brief  метод - Запуск двигателя
     */
    bool Start();
    /*!
     * \brief метод - Заглушить двигатель
     */
    bool Off();
    /*!
     * \brief метод - Разгон авто
     */
    void Move();
    /*!
     * \brief метод - Торможение авто
     */
    void Stop();
    /*!
     * \brief метод - Вывод информации по авто
     */
    void toString();


    void SetBrand(std::string brand){this->brand = brand;};
    void SetModel(std::string model){this->model = model;};
    void SetWight(int weight){this->weight = weight;};
    void SetMaxCarSpeed(int maxCarSpeed){this->maxCarSpeed = maxCarSpeed;};

};

#endif // CAR_H

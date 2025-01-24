#include "engine.h"

#include <iostream>
using std::cout, std::endl;

void Engine::toStringTrack()
{
    power = 740;
    producer = "ПАО «КАМАЗ»";
    cout << "\t~~~Информация о двигателе~~~" << endl;
    cout << "1. Мощность: \t\t\t" << power << " л.с." << endl;
    cout << "2. Проиводитель: \t\t" << producer << endl;
}

void Engine::toStringBalid()
{
    power = 850;
    producer = "Ferrari Company";
    cout << "\n\t~~~Информация о двигателе~~~" << endl;
    cout << "1. Мощность: \t\t\t" << power << endl;
    cout << "2. Проиводитель: \t\t" << producer << endl;
}

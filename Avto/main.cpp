#include "racingcar.h"
#include "track.h"

#include <iostream>
#include <QDebug>
using std::cout, std::endl, std::cin;


int main()
{
    setlocale(LC_ALL, "ru");

    int avto; //< Выбор авто(1 - грузовик, 2 - балид)
    Track track;
    RacingCar balid;
    cout << "Привет! Прежде чем сесть за руль, давай проверим твои водительские документы!\n"<< endl;
    cout << "Введи свое имя: ";
    std::string strName;
    cin >> strName;

    cout << "Введи свой пол: ";
    std::string strGender;
    cin >> strGender;

    cout << "Введи стаж вождения: ";
    int experience;
    cin >> experience;

    for (;;){
        cout << "\nНа каком авто желаешь прокатиться?\n" << endl;
        cout << "Введи цифру '1'(грузовик), если любишь романтику дороги! " << endl;
        cout << "Введи цифру '2'(гоночное авто), если любишь скорость!" << endl;
        cout << "Введи цифру '3', если передумал!" << endl;
        cin >> avto;

        if (avto == 1) {
            cout << "\nОтличный выбор!!! Посмотрим характеристики: \n" << endl;
            track.toString(strName, strGender, experience);
            //track.Start();
            track.Move();
            track.Stop();
            track.Off();
            return 0;
        } else if (avto == 2) {
            cout << "\nОтличный выбор!!! Посмотрим характеристики: \n" << endl;
            balid.toString(strName, strGender, experience);
            balid.Start();
            balid.Move();
            balid.Stop();
            balid.Off();
            return 0;
        } else if (avto == 3) {
            return 0;
        } else {
            cout << "Попробуй еще раз!" << endl;
        }
    }
}

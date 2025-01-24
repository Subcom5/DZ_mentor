#include "car.h"
#include <climits>
#include <iostream>
#include <unistd.h>

using std::cout, std::endl;

bool Car::Start()
{
    cout << "\nДвигатель запущен!!!" << endl;
    validateEngine = true;
    return true;
}

bool Car::Off()
{
    cout << "\nДвигатель остановлен!!!" << endl;
    validateEngine = false;
    return true;
}

void Car::Move()
{
    if(validateEngine){
        cout << "\nПоехали!!!\n" << endl;
        for (int i = 0; i <= maxCarSpeed; i+=10) {
            currentSpeed = i;
            cout << "Текущая скорость: " << i << endl;
            //sleep(1);
        }
    }
    else{cout << "\n<<ВНИМАНИЕ>> Двигатель не запущен. Движение невозможно!!!" << endl; std::exit(0);}

}

void Car::Stop()
{
    if(validateEngine){
        cout << "\nТормозим!!!\n" << endl;
        for (int i = currentSpeed; i >= 0; i-=10) {
            cout << "Текущая скорость: " << i << endl;
            //sleep(1);
            if(currentSpeed == 0)
                cout << "Приехали!!!" << endl;
        }
    }
    else{ cout << "\nСтоим на месте! Расслабся!!!" << endl; std::exit(0);}
}

void Car::toString()
{
    cout << "\n\t~~~Информация по транспортному средству~~~" << endl;
    cout << "1. Марка авто: \t\t\t" << brand << endl;
    cout << "2. Модель авто: \t\t" << model << endl;
    cout << "3. Вес авто: \t\t\t" << weight << " тонн"<< endl;
    cout << "4. Максимальная скорость: \t" << maxCarSpeed << " км/ч\n" << endl;
}


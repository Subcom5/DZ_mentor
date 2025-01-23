#include "integer2.h"

#include <QCoreApplication>
#include<QTextStream>



int main()
{
    QTextStream cout(stdout); //  поток вывода

    Integer integer1(10, 200); // обьект не константный - можем применять любые методы класса
    integer1.Print();
    integer1.Print2();
    integer1.SetInteger(20);
    integer1.Increment(); // поле "num" помечено как mutable, можем применять константный метод
    integer1.Print2();

    // объект константный - можем применять только константные методы
    // иначе компилятор выдаст ошибку
    const Integer integer2(50,900);
    // integer2.SetInteger(); - ошибка!!!!!
    int res = integer2.GetInteger();
    cout << res << Qt::endl;
    // integer2.Increment(); - ошибка!!! Объект константный, а метод нет!
    integer2.Print();

    //int res1 = integer1.UPS++; нельзя менять константное поле
    int res1 = integer1.UPS;


    return 0;

}

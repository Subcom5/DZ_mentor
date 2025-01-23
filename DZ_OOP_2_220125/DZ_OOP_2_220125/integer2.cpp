#include "integer2.h"

#include<QTextStream>

QTextStream cout(stdout); //  поток вывода

Integer::Integer(int num, const int num2) : num(num), NUM2(num2)
{
    cout << "Конструктор класса Integer" << Qt::endl;
}

void Integer::SetInteger(int num)
{
    this->num = num;
}

int Integer::GetInteger() const
{
    return num;
}

void Integer::Print() const
{
    cout << "Num = " << num <<Qt::endl;
    cout << "const NUM2 = " << NUM2 <<Qt::endl;
    cout << "const UPS = " << UPS <<Qt::endl;
}


void Integer::Print2()
{
    cout << "Num = " << num <<Qt::endl;
    cout << "const NUM2 = " << NUM2 <<Qt::endl;
    cout << "const UPS = " << UPS <<Qt::endl;
}

void Integer::Increment()
{
    num++;
}


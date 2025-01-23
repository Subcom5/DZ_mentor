#include "integer.h"

#include<QTextStream>

QTextStream cout(stdout); //  поток вывода

Integer::Integer(int num) : num(num)
{
    cout << "Конструктор класса Integer" << Qt::endl;
}

void Integer::SetInteger(int num)
{
    this->num = num;
}

int Integer::GetInteger()
{
    return num;
}

void Integer::Print()
{
    cout << "Num = " << num <<Qt::endl;
}

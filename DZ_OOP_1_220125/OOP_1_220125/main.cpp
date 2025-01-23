#include <integer.h>

#include<QTextStream>



int main(){

    QTextStream cout(stdout); //  поток вывода

    Integer integer1{77};
    integer1.Print();

    Integer integer2{22};
    integer2.Print();
    integer2.SetInteger(55);
    int res = integer2.GetInteger();
    cout << "Значение поля 'num': " << res << "\n" << Qt::endl;

    integer1 = integer2;
    integer1.Print();

    return 0;
}

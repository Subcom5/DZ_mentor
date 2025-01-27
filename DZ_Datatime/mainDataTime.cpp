#include<iostream>
#include<chrono>
#include<iomanip>
using std::cout, std::endl;


int main()
{
    setlocale(LC_ALL, "ru");

    /*~~~~~~~~~~~~~~~~~~Выводим текущее время ~~~~~~~~~~~~~~~~~~~~~~*/

    std::chrono::time_point time_now = std::chrono::system_clock::now();    // объект типа timepoint

    /* time_t — это тип данных, используемый для представления времени в виде
     * количества секунд, прошедших с эпохи Unix (полночь 1 января 1970 года, UTC). */

    time_t time_now_t = std::chrono::system_clock::to_time_t(time_now);

    /*ctime преобразует time_t в строку*/
    cout << "Текущее время: " << std::ctime(&time_now_t) << endl;

    /* Современный вывод времени std::put_time из <iomanip>*/
    cout << "Форматированный вывод времени: " << std::put_time(std::localtime(&time_now_t), "%Y-%m-%d %H:%M:%S") << endl;

    /*~~~~~~~~~~~~~~~~~~Выводим заданное время ~~~~~~~~~~~~~~~~~~~~~~*/

    // Выводим 2030 год 31 декабря 11 вечера

    std::tm MyTimeStruct{};
        MyTimeStruct.tm_year = 130;     // год задается как целое число лет, прошедших с 1900 года
        MyTimeStruct.tm_mon = 11;      // нумерация месяцев начинается с нуля
        MyTimeStruct.tm_mday = 31;
        MyTimeStruct.tm_hour = 23;
        MyTimeStruct.tm_min = 0;
        MyTimeStruct.tm_sec = 0;


    time_t timeT = std::mktime(&MyTimeStruct);
    cout << "Выводим 2030 год 31 декабря 11 вечера: " << std::put_time(std::localtime(&timeT), "%Y-%m-%d %H:%M:%S") << endl;
    cout << "Год: " << std::put_time(std::localtime(&timeT), "%Y") << endl;
    cout << "Месяц: " << std::put_time(std::localtime(&timeT), "%m") << endl;
    cout << "День: " << std::put_time(std::localtime(&timeT), "%d") << endl;
    cout << "Часы: " << std::put_time(std::localtime(&timeT), "%H") << endl;
    cout << "Минуты: " << std::put_time(std::localtime(&timeT), "%M") << endl;
    cout << "Секунды: " << std::put_time(std::localtime(&timeT), "%S") << endl;


    return 0;
}

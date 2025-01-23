#ifndef INTEGER2_H
#define INTEGER2_H

class Integer{

    mutable int num;    // mutable - можно изменять поле константным методом

    // поскольку есть константное не инициализированное поле, то мы
    // должны инициализировать его в конструкторе и конструктор копирования
    const int NUM2; // разная для каждого объекта класса

public:

    const int UPS = 100; // одна и таже для всех объектов класса
    /*!
     * \brief Конструктор класса Integer
     */
    Integer(int num, const int num2);
    /*!
     * \brief Конструктор копирования
     * \param other
     */
    Integer(const Integer &other): num(other.num), NUM2(other.NUM2){};
    /*!
     * \brief Сеттер
     * \param [in] num
     */
    void SetInteger(int num);       // сеттер не может быть константным он изменяет состояние объекта
    /*!
     * \brief Геттер
     * \return int num
     */
    int GetInteger() const;
    /*!
     * \brief Константная функция вывода числа Num2
     */
    void Print() const;
    /*!
     * \brief Функция вывода числа Num
     */
    void Print2();
    /*!
     * \brief Функция реализующая инкремент поля класса типа int
     */
    void Increment();
};

#endif // INTEGER2_H

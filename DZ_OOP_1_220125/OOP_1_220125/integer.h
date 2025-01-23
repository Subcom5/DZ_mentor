#ifndef INTEGER_H
#define INTEGER_H


class Integer{

    int num;

public:
    /*!
     * \brief Конструктор класса Integer
     */
    Integer(int num);
    Integer(const Integer &other): num(other.num){};
    /*!
     * \brief Сеттер
     * \param [in] num
     */
    void SetInteger(int num);
    /*!
     * \brief Геттер
     * \return int num
     */
    int GetInteger();
    /*!
     * \brief Функция вывода числа Num
     */
    void Print();
};

#endif // INTEGER_H

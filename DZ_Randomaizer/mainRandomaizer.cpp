#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

// Ищем четные числа
void evenNumbers(const vector<int> &vec){
    vector<int> even;
    for(const int IT : vec){
        if(IT % 2 != 0){even.push_back(IT);}
    }
    cout << "Нечетные числа в массиве: ";
    for(const int IT : even){
        cout << IT <<" ";
    }
    int count = even.size();
    cout << "\nКоличество нечетных чисел: " << count << endl;
}

// Заполняем вектор рандомными числами
vector<int> vecRandomaizer(vector<int> &vec, int size){
    srand(time(0));                 // Инициализация генератора случайных чисел
    cout << "Рандомный вектор: ";
    for (int i = 0; i < size; i++){
        int number = rand() % 99;
        vec.push_back(number);
        cout << number <<" ";
    }
    cout << endl;
    return vec;
}

int main(){

    setlocale(LC_ALL, "ru");

    vector<int> vec;

    vec = vecRandomaizer(vec, 10);  // Заполняем вектор числами

    evenNumbers(vec);   // Ищем нечетные числа

    return 0;
}




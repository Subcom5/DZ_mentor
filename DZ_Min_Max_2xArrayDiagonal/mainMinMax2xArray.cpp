#include<iostream>
using std::cout, std::endl;



void MaxNumberInArray(int *arr, const int size){

    int maxNumber{0};
    for (int i = 0; i < size; i++){
        if (arr[i] > maxNumber) maxNumber = arr[i];
    }
    cout << "Массив: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Максисмальное число в массиве: " << maxNumber << endl;
}

void MinNumberInArray(int *arr, const int size){

    int minNumber{0};
    for (int i = 0; i < size; i++){
        if (arr[i] < minNumber) minNumber = arr[i];
    }
    cout << "\nМассив: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Минимальное число в массиве: " << minNumber << endl;
}

void diagonalArray(int arr[][4], int rows){

    cout << "\nДвумерный массив: \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int numChange = 9;

    for (int i = 0; i < rows; i++){
        arr[i][i] = numChange;
    }

    cout << "\nДвумерный массив c диагональю из '9': \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr1[]{10, 3, 6, 7, 8, 33, -7};         // Инициализируем массив
    int size1 = sizeof(arr1)/sizeof(*arr1);     // Вычисляем размер массива
    MaxNumberInArray(arr1, size1);
    MinNumberInArray(arr1, size1);

    const int rows = 4;
    int arr2[rows][4]{
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    diagonalArray(arr2, rows);

    return 0;
}

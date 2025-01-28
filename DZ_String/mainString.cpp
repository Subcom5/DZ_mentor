#include <algorithm>
#include<iostream>
#include <map>
#include<string>
#include<vector>
#include<sstream>
#include<QDebug>

using std::cout, std::endl, std::string, std::vector, std::map;

    /*~~~~~~~~~~~~ Сравнение слов - Начало ~~~~~~~~~~~*/

// Разделяем массив на слова, разделенные пробелом
vector<string> split(const string &str){
    vector<string> words;
    std::istringstream iss(str); // для разбиения строки на слова
    string word;

    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

// Ищем самое короткое слово
string MinWord(const string &str){
    vector<string> words = split(str);

    // лямбда функцией оперделяем что значит меньше
    auto it = std::min_element(words.begin(), words.end(), [](const std::string& a, const std::string& b){
        return a.length() < b.length();});

    return *it;
}

// Ищем самое длинное слово
string MaxWord(const string &str){
    vector<string> words = split(str);

    // лямбда функцией оперделяем что значит больше
    auto it = std::max_element(words.begin(), words.end(), [](const std::string& a, const std::string& b){
        return a.length() < b.length();});

    return *it;
}
    /*~~~~~~~~~~~~Сравнение слов - Конец ~~~~~~~~~~~*/


    /*~~~~~~~~~~~~ Максимальное количество слов - Начало ~~~~~~~~~~~*/
string count(const string &str){
    map<string, int> wordCount;
    std::istringstream iss(str);
    string word;

    // Разбиваем строку на слова и считаем их количество
    while (iss >> word) {
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        wordCount[word]++;
    }
    // Находим слово с максимальным количеством вхождений
    string repeatingWord;
    int maxCount = 0;
    for (const auto &it: wordCount){
        if(it.second > maxCount){
            maxCount = it.second;
            repeatingWord = it.first;
        }
    }
    return repeatingWord;
}
    /*~~~~~~~~~~~~ Максимальное количество слов - Конец ~~~~~~~~~~~*/

int main()
{
    /*~~~~~~~~~~~~ Сравнение слов - Начало ~~~~~~~~~~~*/
    string str{"My root Frodo clean root moon"};

    cout << "Наименьшее слово: " << MinWord(str) << endl;
    cout << "Наибольшее слово: " << MaxWord(str) << endl;
    /*~~~~~~~~~~~~Сравнение слов - Конец~~~~~~~~~~~*/



    /*~~~~~~~~~~~~ Максимальное количество слов - Начало~~~~~~~~~~~*/
    cout << "Самое частое слово: " <<  count(str) << endl;
    /*~~~~~~~~~~~~ Максимальное количество слов - Конец ~~~~~~~~~~~*/

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int anotherNum = 0;

    vector<int> dynArrNums(3);

    dynArrNums[0] = 365;
    dynArrNums[1] = -421;
    dynArrNums[2] = 789;


    cout << "чисел в массиве: " << dynArrNums.size() << endl;
    cout << "Введите новое число для вставки в массив: ";
    cin >> anotherNum;

    dynArrNums.push_back(anotherNum);

    cout << "чисел в массиве: " << dynArrNums.size() << endl;
    cout << "Прследний элемент массива: ";
    cout << dynArrNums[dynArrNums.size() - 1] << endl;

    for (int i = 0; i < dynArrNums.size(); i++){
        cout << dynArrNums[i] << ",";
    }

    return 0;
}

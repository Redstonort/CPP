#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите слово не длиннее 20 символов: ";
    char userInput[21] = {'\0'};
    cin >> userInput;
    cout << "Длинна ввода: " << strlen(userInput) << endl;
    cout << "Первый симвоол: " << userInput[0] << endl;
    cout << "Послеедний символ: " << userInput[strlen(userInput)-1] << endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;


int main()
{
    cout << "введите время на часах: " << endl;
    int time;
    cin >> time;


    if (time > 0 && time <= 6) {
        cout << "Сейчас ночь" << endl;
    }
    if (time > 6 && time <= 12) {
        cout << "Сейчас утро" << endl;
    }
    if (time > 12 && time <= 18) {
        cout << "сейчас день" << endl;
    }
    if (time > 18 && time <= 24) {
        cout << "сейчас вечер" << endl;
    }
    if (time < 0 || time > 24){
        cout << "Ошибка! Введите только часы больше 0 и меньше 24" << endl;
    };


    return 0;
}

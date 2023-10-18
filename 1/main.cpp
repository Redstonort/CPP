#include <iostream>
using namespace std;


int num1 = 0;
int num2 = 0;
string sim = "a";
int main()
{
    cout <<  "Введите первое число: ";
    cin >> num1;
    cout <<  "Введите первое число: ";
    cin >> num2;
    cout <<  "Введите математический знак(+ - * /)";
    cin >> sim;
    if(sim == "+"){
        cout << "полученое число: " << num1+num2 << endl;
    }
    else if(sim == "-"){
        cout << "полученое число: " << num1-num2 << endl;
    }
    else if(sim == "/"){
        cout << "полученое число: " << num1/num2 << endl;
    }
    else if(sim == "*"){
        cout << "полученое число: " << num1*num2 << endl;
    }
    else{
        cout << "неправильный ввод";
    };

    return 0;
}

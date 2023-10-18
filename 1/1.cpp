#include <iostream>
using namespace std;


int m = 0;
int a = 0;
int F = 0;
int main()
{
    cout << "введите пожалуйста массу: ";
    cin >> m;
    cout << "введите пожалуйста ускорение: ";
    cin >> a;
    F = a * m;
    cout << "Полученая сила: " << F << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int a = 51;
int b = 1;
int c = 10;
int value = 0;

/*
int main() {
  do {
    if (b % c != 0) {
      if (b < 10) {
        cout << "0" << b << "  ";
      } else {
        cout << b << "  ";
      }
    } else {
      cout << b << "  " << endl;
    }
    b++;
  } while (b != a);
  return 0;
}
*/

/*
int p(int a, int b) {
  int res = 1;
  for (int i = 0; i < b; i++) {
    res = res * a;
  }
  return res;
}

int main() {
  cout << "Введите любоче число: ";
  cin >> a;
  cout << "Введите в какую степень хотите его возвести: ";
  cin >> b;
  cout << p(a, b);

  return 0;
}
*/

/*
int sumTo(int value) {
  int res = 0;
  for (int i = 1; i <= value; i++) {
    res += i;
  }
  return res;
}

int main() {
  cout << "Введите любоче число: ";
  cin >> value;
  cout << "Ссума всех числел от 1 до введённого составляет: " << sumTo(value);
}
*/

vector<int> fibonassi(int value) {
  vector<int> res = {1, 1};
  for (int i = 2; i < value; i++) {
    res.push_back(res[i - 1] + res[i - 2]);
  }
  return res;
};

int main() {
  cout << "сколько чисел фибоначи нужно вывести? :";
  cin >> value;

  for (int n : fibonassi(value)) {
    cout << n << " ";
  }

  return 0;
}

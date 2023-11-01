#include <iostream>

using namespace std;
const int ARRAY_LENGHT = 5;
int main()
{
    int elementIndex = 0;
    int newVaule = 0;

    int myNumbers[ARRAY_LENGHT] = {5,10,0,-101,20};

    cout << "Input index element in array: ";
    cin >> elementIndex;
    cout << "Input new vaule: ";
    cin >> newVaule;

    myNumbers[elementIndex] = newVaule;



    cout << "Element " << elementIndex << " myNumbers equals: ";
    cout << myNumbers[elementIndex] << endl;

    for (int i = 0; i < ARRAY_LENGHT; i++){
        cout << myNumbers[i] << ",";
    }

    return 0;
}

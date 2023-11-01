#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {321, 140, 149, 5638, 42956};
    for (int j=0;j < 5; j++){
        for (int i = 0; i < 4; i++){
            if (arr[i] > arr[i+1]){
                int tmp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]= tmp;
            }
        }

    }

    for (int i = 0;i < 5; i++) {
        cout << arr[i] << ", ";
    }


    return 0;
}

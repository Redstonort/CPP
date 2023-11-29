#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


vector<int> enemyLine(10);
vector<string> enemyLineLocations(10);

int GetRandomNumber(int min, int max)
{
    srand(time(NULL));

    int num = min + rand() % (max - min + 1);

    return num;
}

int shot = 0;

int enemyShip1Location = GetRandomNumber(0, 9);
int enemyShip2Location = GetRandomNumber(0, 9);
int enemyShip3Location = GetRandomNumber(0, 9);

bool enemyShip1Alive = true;
bool enemyShip2Alive = true;
bool enemyShip3Alive = true;

string water = "~~~";
string destroyedShip = "<S>";
string unknownLocation = "-#=";
string explosion = "\\@/";




int main()
{
    for (int i = 0; i < enemyLine.size(); i++) {
        enemyLineLocations[i] = unknownLocation;
    }

    while (enemyShip2Location == enemyShip1Location) {
        enemyShip2Location = GetRandomNumber(0, 9);
    }
    while (enemyShip3Location == enemyShip1Location or enemyShip3Location == enemyShip2Location) {
        enemyShip3Location = GetRandomNumber(0, 9);
    }

    cout << enemyShip1Location << "  ";
    cout << enemyShip2Location << "  ";
    cout << enemyShip3Location << endl;

    cout << "====-----/Welcome to 'Battleships'!/-----====" << endl;
    cout << "Your mission is to destroy 3 enemy ships" << endl;
    cout << endl << " " << water << " - water | " << destroyedShip << " - destroyed ship |" << unknownLocation << "  - unknown location | " << explosion << " - explosion";

    while (enemyShip1Alive == true and enemyShip2Alive == true and enemyShip3Alive == true) {

        cout << endl << "choose coordinates where you want to shot(1-10)" << endl;
        cout << ">";
        cin >> shot;

        cout << endl;

        enemyLineLocations[shot - 1] = explosion;

        for (int i = 0; i < enemyLine.size(); i++) {
            cout << enemyLineLocations[i];
        }

        if (enemyLine[shot - 1] != enemyShip1Location and enemyLine[shot - 1] != enemyShip2Location and enemyLine[shot - 1] != enemyShip3Location) {
            enemyLineLocations[shot - 1] = water;
        }
        else{
            
            enemyLineLocations[shot - 1] = destroyedShip;
            if (enemyLine[shot - 1] = enemyShip1Location) {
                enemyShip1Alive = false;
            }
            if (enemyLine[shot - 1] = enemyShip2Location) {
                enemyShip2Alive = false;
            }
            if (enemyLine[shot - 1] = enemyShip3Location) {
                enemyShip3Alive = false;
            }           
;       }

        cout << "\n\n1 = true | 0 = false" << enemyShip1Alive << endl;
        cout << "\nEnemy1 Alive?   " << enemyShip1Alive << endl;
        cout << "Enemy2 Alive?   " << enemyShip2Alive << endl;
        cout << "Enemy2 Alive?   " << enemyShip3Alive << endl;

        for (int i = 0; i < enemyLine.size(); i++) {
            cout << enemyLineLocations[i];
        }

    }

    return 0;
}

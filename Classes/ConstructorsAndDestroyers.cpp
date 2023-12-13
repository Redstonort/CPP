#include <iostream>

using namespace std;

class Doctor {
private:
    string spec;
public:
    string name;
    int setspec(string s){
        if (s == "Surgeon") {
            this->spec = s;
            return 0;
        }
        else if (s == "FamilyDoctor"){
            this->spec = s;
            return 0;
        }
        else {
            this->spec = "Doctor";
            return 1;
        }
    }

    string getspec(){
        return this->spec;
    }
};

class Surgeon: public Doctor{
public:
    int age;

    Surgeon(int myAge){
        this->age = myAge;
        cout << "Constructor crated Surgeon his age is " << this->age << endl;

    }
    Surgeon(){
        this->age = 10;
        cout << "Constructor crated Surgeon" << this->age  << endl;

    }
    ~Surgeon(){
        cout << "Destructor killed Surgeon" << endl;
    }
};
class FamilyDoctor: public Doctor{
public:
    int age;

    void giveMedicine(string pills){
        cout << "Family Doctor gave famlily " << pills << endl;
    }
};

int main()
{
    Doctor d1;
    d1.name = "bob";
    cout << d1.name << endl;
    int foo = 1;
    string speci = "0";
    //while (foo == 1) {
    //    cin >> speci;
    //    foo = d1.setspec(speci);
    //}
    cout << d1.getspec() << endl;
    cout << "--------------------------------------------------------" << endl;
    Surgeon d2(55);
    Surgeon d3;
    d3.name = "Boris";
    FamilyDoctor d4;
    d4.name = "Alexander";
    d4.giveMedicine("Asperine");

    return 0;
}

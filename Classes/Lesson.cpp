#include <iostream>

using namespace std;

class Human{
public:
    string name;
    int age;
    string gender;
    string dateOfBirth;

    Human(string humanName){
        this->name = humanName;
        cout << "Constructor Created Human, His Name is " << this->name << endl;
    }

    void talk(string textToTalk) {
        cout << "Hello my name is " << this->name << " i'm " << this->age << " and also " << this->gender << ". " <<textToTalk << endl;
    }

    int getAge() {
        return this->age;
    }
};

class Cat{
public:
    string Cname;
    Cat(string catName){
        this->Cname = catName;
    }
    void meow(){
        cout << this-> Cname << " meow" << endl;
    }
};

int main()
{
/*
    Human firstMan("Boris");
    firstMan.name = "Kirill";
    firstMan.age = 16;
    firstMan.gender = "Man";
    cout << firstMan.name << " " << firstMan.age << " " << firstMan.gender << endl;
    firstMan.talk("How are you?");

    Human secondMan;
    secondMan.name = "ira";
    secondMan.age = 19;
    secondMan.dateOfBirth="01.01.2001";
    secondMan.talk("Hi!");
    int age2 = secondMan.getAge();
*/
    Cat firstCat("Lucy");
    firstCat.meow();

    return 0;
}

#include <iostream>
#include <sstream>

using namespace std;

class Date {
private:
    int day,month,year;
    string dateInString;
public:
    Date(int inDay, int inMonth, int inYear)
        : day(inDay),month(inMonth),year(inYear){}
    operator const char* (){
        ostringstream formatedDate;
        formatedDate << day << "." << month << "." << year << endl;
        dateInString = formatedDate.str();
        return dateInString.c_str();
    }
    Date operator++() {
        ++day;
        return *this;
    }

    Date operator++(int) {
        Date copy(day,month,year);
        ++day;
        return copy;
    }

    Date operator + (int daysToAdd) {
        Date newDate(day + daysToAdd,month,year);
        return newDate;
    }

    Date convert(){
        int allDay = day + 30*month + year*360;
        cout << allDay << endl;
        int lyear = allDay / (360);

        int lmonth= (allDay % 360) / (30);
        int lday = (allDay % 360 % 12) % (30);
        Date convDate(lday,lmonth,lyear);
        return convDate;
    }

};

class Point{
public:
    int x,y;
};

int main()
{
    Date Cristmass(7,1,2024);
    cout << "Cristmass at " << Cristmass << endl;
    Point p1;
    p1.x = 10;
    p1.y = 10;
    cout << p1.x << endl;
    ++Cristmass;
    cout << Cristmass << endl;
    Cristmass++;
    cout << Cristmass << endl;
    cout << Cristmass +0 << endl;
    Cristmass = Cristmass + 30;
    cout << Cristmass.convert() << endl;


    return 0;
}

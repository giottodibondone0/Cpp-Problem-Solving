#include <iostream>
#include <string>
using namespace std;

struct stTimes {
    float hours ={};
    float days = {};
    float weeks = {};
};

struct stTimeConfig {
    const float HoursPerDay = 24;
    const float DaysPerWeek = 7;
};
stTimes GetHours() {
stTimes Times;
    cout <<"Enter hours : ";
    cin>> Times.hours;
return Times;
}

stTimes CalcDays(stTimes Times) {
    stTimeConfig Config;
    Times.days = Times.hours / Config.HoursPerDay;
    return Times;
}stTimes CalcWeeks(stTimes Times) {
    stTimeConfig Config;
    Times.weeks = Times.days / Config.DaysPerWeek;
    return Times;
}

void PrintData (stTimes Times) {
    cout << Times.hours <<endl;
    cout << Times.days<<endl;
    cout << Times.weeks<<endl;
}


int main() {
    PrintData(CalcWeeks(CalcDays(GetHours())));
    return 0;
}
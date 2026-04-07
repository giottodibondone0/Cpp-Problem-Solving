#include <iostream>
#include<cmath>
using namespace std;

struct  stTimes {
        int seconds ={};
        int minutes = {};
        int hours = {};
        int days = {};
        long long TotalSeconds = {};
};
struct stTimeRelations {
    const int SecondsPerMinute = 60;
    const int SecondsPerHour = 60*60;
    const int SecondsPerDay = 60LL * 60 * 24;
};

stTimes GetData() {
    stTimes Times;
    cout << "Enter the total seconds : ";
    cin >> Times.seconds;

    cout << "Enter the total minutes : ";
    cin >> Times.minutes;

    cout << "Enter the total hours : ";
    cin >> Times.hours;

    cout << "Enter the total days : ";
    cin >> Times.days;

    return Times;
}


stTimes secondsCalc(stTimes Times) {

    stTimeRelations TimeRelations;
    Times.TotalSeconds = Times.seconds
    + (Times.minutes*TimeRelations.SecondsPerMinute)
    + (Times.hours*TimeRelations.SecondsPerHour)
    + (Times.days*TimeRelations.SecondsPerDay);
    return Times;
}

void PrintResult(stTimes Times) {
    cout << Times.TotalSeconds;
}



int main() {
    PrintResult(secondsCalc(GetData()));
    return 0;
}
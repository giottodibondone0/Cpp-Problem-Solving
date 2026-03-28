#include <iostream>
#include<cmath>
using namespace std;

int main() {


    short secondsperminutes = 60;
    short secondsperhours = 60*60;
    long secondsperdays = 24*60*60;
    long totalseconds;

    cin>> totalseconds;

    long numberofdays = totalseconds/ secondsperdays;

    long reminder = totalseconds % secondsperdays;

    long numberofhours = reminder / secondsperhours;

    reminder = reminder % secondsperhours;

    long numberofminutes = reminder / secondsperminutes;

    reminder = reminder % secondsperminutes;

    long numberofseconds = reminder;


    cout<< numberofdays<<":"<<numberofhours<<":"<<numberofminutes<<":"<<numberofseconds;









    return 0;
}
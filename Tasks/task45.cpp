#include <iostream>
#include <string>
using namespace std;

enum months {JAN=1, FEB=2, MAR=3, APR=4, MAY=5, JUN=6, JUL=7, AUG=8, SEP=9, OCT=10, NOV=11, DEC=12};

void MonthsMenu() {

    cout<< "****************************** "<<endl;
    cout<< " choose between the months"<<endl;
    cout<< "1- JAN"<<endl;
    cout<< "2- FEB"<<endl;
    cout<< "3- MAR"<<endl;
    cout<< "4- APR"<<endl;
    cout<< "5- MAY"<<endl;
    cout<< "6- JUN"<<endl;
    cout<< "7- JUL"<<endl;
    cout<< "8- AUG"<<endl;
    cout<< "9- SEP"<<endl;
    cout<< "10- OCT"<<endl;
    cout<< "11- NOV"<<endl;
    cout<< "12- DEC"<<endl;
    cout<< "****************************** "<<endl;

}
months Getmonth() {
int a;
    months month;
cin >> a;
month = (months)a;
return month;
}
string ShowMonth(months MonthNum) {
    switch (MonthNum) {
        case JAN:
            return  "JAN";

        case FEB:
            return  "FEB";

        case MAR:
            return  "MAR";

        case APR:
            return  "APR";

        case MAY:
            return  "MAY";

        case JUN:
            return  "JUN";

        case JUL:
            return  "JUL";
        case AUG:
            return  "AUG";

        case SEP:
            return  "SEP";

        case OCT:
            return  "OCT";

        case NOV:
            return  "NOV";

        case DEC:
            return  "DEC";

         default:
            return  "enter a valid month";
    }
}

int main () {

    MonthsMenu();
    cout << ShowMonth(Getmonth());

    return 0;
}
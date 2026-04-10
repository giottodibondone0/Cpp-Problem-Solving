#include <iostream>
using namespace std;


int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}


bool PerfectOrNot(int Num) {
    int sum = 0;
    for (int i = 1; i <= Num/2 ;i++) {
        if (Num % i ==0) {
            sum = sum + i;
        }
        else continue;
    }
    if (Num == sum) {
        return true;
    }
    else return false;
}

void GetPerfectNumbers( int UserNumber) {
    for (int  counter = 1; counter<=UserNumber ; counter++){
       if (PerfectOrNot(counter)) {
           cout << counter <<endl;
       }
    }
}




int main() {


int UserNumber = GetUserNumber();
GetPerfectNumbers(UserNumber);

    return 0;
}
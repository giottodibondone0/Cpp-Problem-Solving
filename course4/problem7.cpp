#include <iostream>
using namespace std;

int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}


int ReverseNumber(int UserNumber) {
    int Reversed = 0;
    while (UserNumber!=0) {
        int FirstNum = (UserNumber%10);
        UserNumber = UserNumber/10;
        Reversed = (Reversed*10)+FirstNum;

    }
    return Reversed;
}

void PrintReversed(int Reversed) {
    cout << Reversed;
}





int main () {
PrintReversed(ReverseNumber(GetUserNumber()));

    return 0;
}
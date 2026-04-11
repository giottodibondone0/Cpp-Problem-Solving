#include <iostream>
using namespace std;

int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}
int SumDigits(int UserNumber) {

    int sum = 0;
    while (UserNumber!=0){
        int number = (UserNumber%10);

        sum = sum + number;
        UserNumber = UserNumber/10;
    }

    return sum;
}
void PrintResult(int Sum) {
    cout << "the sum of the digits is : " << Sum;
}


int main() {

    PrintResult(SumDigits(GetUserNumber()));
    return 0;
}
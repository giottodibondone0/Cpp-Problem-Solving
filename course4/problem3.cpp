#include<iostream>
using namespace std;

int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}

int Sum(int Num) {
    int i;
    int sum = 0;
    for (i = 1; i <= Num/2 ;i++) {
        if (Num % i ==0) {
            sum = sum + i;
        }
        else continue;
    }
    return sum;
}

bool PerfectOrNot(int Num, int sum) {
    if (Num == sum) {
        return true;
    }
    else return false;
}

void PrintResult(int Num, bool PerfectOrNot) {
    if (PerfectOrNot) {
        cout << to_string(Num)<< " is a perfect number";
    }
    else {
         cout << to_string(Num)<< " is not a perfect number";
    }
}












int main() {

int Num = GetUserNumber();

int sum = Sum(Num);

bool Perfect = PerfectOrNot(Num,sum);

PrintResult(Num,Perfect);
    return 0;
}
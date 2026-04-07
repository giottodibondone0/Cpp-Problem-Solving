#include <iostream>
#include <string>
using namespace std;

enum NumberState {Prime = 1, NotPrime =0};
int GetNumber () {
    int Num;
    cout << "please enter a a number : ";
    cin >> Num;
    return Num;

}

NumberState PrimeOrNot(int Num) {


    if (Num <= 1) {
        return NotPrime;
    }if (Num <= 3) {
        return Prime;
    }
    if (Num % 2 == 0 || Num % 3 == 0) return NotPrime;

        for (int i  =5;  i*i <=Num; i+=6) {
            if (Num % i == 0 or Num % (i+2) == 0)
                return NotPrime;
        }
    return Prime;
}

void PrintResult (NumberState PrimeOrNot) {
    switch (PrimeOrNot) {
        case Prime:
            cout << "This num is prime";
            break;
        case NotPrime:
            cout << "This num is not prime";
            break;
    }
}

int main() {
        PrintResult(PrimeOrNot(GetNumber()));
    return 0;
}
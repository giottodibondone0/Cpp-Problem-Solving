#include <iostream>
using namespace std;
int GetUserNumber() {
    int UserNumber;
    cout << "Enter a number : ";
    cin >> UserNumber;
    return  UserNumber;
}
int PrimeOrNot(int UserNumber, int PrimeNumbers[]) {
    int J =0;
    int i;
    for ( i = 2; i <= UserNumber; i++) {



        if (i == 2 || i == 3) {
            PrimeNumbers[J++] = i;
            continue;
        }




        if (i % 2 == 0 || i % 3 == 0) continue;



        bool isPrime = true;
        for (int K = 5; K * K <= i; K += 6) {
            if (i % K == 0 || i % (K + 2) == 0) {
                isPrime = false;
                break;
            }
        }



        if (isPrime) {
            PrimeNumbers[J++] = i;
        }
    }
    return J;
}
void PrintPrimeNumbers(int J, int PrimeNumbers[]) {
    for (int i=0; i < J;i++) {
        cout << PrimeNumbers[i]<< endl ;
    }
}



int  main() {
int PrimeNumbers[1000];
    int i = GetUserNumber();
    int J = PrimeOrNot(i,PrimeNumbers);
    PrintPrimeNumbers(J,PrimeNumbers);
    return 0;
}
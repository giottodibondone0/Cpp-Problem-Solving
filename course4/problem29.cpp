 #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void GetArrayValue(int ArrayLength,int Array[]) {

    for (int i =0; i < ArrayLength;i++) {
        Array[i] =RandomNumber(1,100);
    }
}

bool PrimeOrNot(int Value) {


    if (Value <= 1) return false;

        if (Value == 2 || Value == 3) {
            return true;
        }




        if (Value % 2 == 0 || Value % 3 == 0) return false;



        bool isPrime = true;
        for (int K = 5; K * K <= Value; K += 6) {
            if (Value % K == 0 || Value % (K + 2) == 0) {
                isPrime = false;
                break;
            }
        }



        if (isPrime) {
            return true;
        }
        return false;
    }



int CopyPrimeNums(const int Arr[],int Prime[], int ArrayLength) {
    int PrimeCount = 0;
    for (int i = 0; i <ArrayLength;i++) {
        if (PrimeOrNot(Arr[i])) {
            Prime[PrimeCount]=Arr[i];
            PrimeCount++;
        }
    }
    return PrimeCount;
}



void PrintResult( const int Array[],const int Prime[],int ArrayLength, int PrimeAmount) {
    cout << "Array is : ";
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << Array[i] << " ";
    }
    cout<<endl << "Prime numbers are : ";
    for (int i = 0 ; i < PrimeAmount; i++) {
        cout << Prime[i] << " ";
    }
}



int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    constexpr int ArrayLength = 10;
    int arr[ArrayLength];
    int Prime[ArrayLength];

    GetArrayValue(ArrayLength,arr);
    int PrimeAmount = CopyPrimeNums(arr,Prime,ArrayLength);
    PrintResult(arr,Prime,ArrayLength,PrimeAmount);






    return 0;
}
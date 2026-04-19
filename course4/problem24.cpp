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


int GetMaxNum(const int Array[],int ArrayLength) {
    int MaxNum = Array[0];
    for (int i = 0; i < ArrayLength ; i++) {

        if (Array[i] > MaxNum) {
            MaxNum = Array[i];
        }
    }
    return MaxNum;
}


void PrintResult(int ArrayLength, int Array[],int Max) {
    cout << "Array is : ";
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << Array[i] << " ";
    }
    cout<< endl << "Max num is : "<<Max;
}


int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    constexpr int Arraylength = 10;
    int arr[Arraylength];
    GetArrayValue(Arraylength,arr);
    int Max = GetMaxNum(arr,Arraylength);
    PrintResult(Arraylength,arr,Max);


    return 0;
}
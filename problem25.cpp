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


int GetMinNum(const int Array[],int ArrayLength) {
    int MinNum = Array[0];
    for (int i = 1; i < ArrayLength ; i++) {

        if (Array[i] < MinNum) {
            MinNum = Array[i];
        }
    }
    return MinNum;
}


void PrintResult(int ArrayLength, int Array[],int Min) {
    cout << "Array is : ";
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << Array[i] << " ";
    }
    cout<< endl << "Min num is : "<<Min;
}


int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    constexpr int Arraylength = 10;
    int arr[Arraylength];
    GetArrayValue(Arraylength,arr);
    int Min = GetMinNum(arr,Arraylength);
    PrintResult(Arraylength,arr,Min);


    return 0;
}
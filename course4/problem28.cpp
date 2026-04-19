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

void CopyArray(const int Arr[],int Copy[], int ArrayLength) {
    for (int i = 0; i <ArrayLength;i++) {
        Copy[i]=Arr[i];
    }
}

void PrintResult(int ArrayLength, const int Array[],const int Copy[]) {
    cout << "Array is : ";
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << Array[i] << " ";
    }
    cout<<endl << "Copy is : ";
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << Copy[i] << " ";
    }
}



int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    constexpr int ArrayLength = 10;
    int arr[ArrayLength];
    int Copy[ArrayLength];
    GetArrayValue(ArrayLength,arr);
    CopyArray(arr,Copy,ArrayLength);
    PrintResult(ArrayLength,arr,Copy);


    return 0;
}
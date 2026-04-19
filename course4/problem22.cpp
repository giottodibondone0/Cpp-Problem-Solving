#include <iostream>
using namespace std;

int GetArrayLength() {
    int Num;
    cout << "Enter array length";
    cin >> Num;
    return  Num;
}
int GetWantedNumber() {
    int Num;
    cout << "Enter the number you want to search ";
    cin >> Num;
    return  Num;
}

void GetArray(int ArrayLength,int Array[]) {
    for (int i =0; i < ArrayLength;i++) {
        cout << "Enter Array value number : "<< i+1 << endl;
        cin >> Array[i];

    }

}

int ArraySearch(int ArrayLength , int WantedNumber,int Array[]) {
    int Counter  = 0;
    for (int i = 0;i < ArrayLength;i++) {
            if (Array[i]==WantedNumber) {
                Counter++;
            }
    }
return Counter;
}

void PrintResult(int WantedNumber , int ArrayLength,int WantedNumberRepeats, int Array[]) {
    cout << "Original Array is : ";
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << Array[i] << " ";
    }
    cout<<endl << WantedNumber<< " Is repeated " << WantedNumberRepeats<< " times";
}

int main() {
    int arr[100];
    int ArrayLength = GetArrayLength();
    GetArray(ArrayLength,arr);
    int WantedNumber = GetWantedNumber();
    int WantedNumberRepeats = ArraySearch(ArrayLength,WantedNumber,arr);

    PrintResult(WantedNumber,ArrayLength,WantedNumberRepeats,arr);

    return 0;
}
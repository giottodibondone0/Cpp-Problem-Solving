  #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int GetUserNumber(const string& Message) {
    int Num;
    cout << Message;
    cin >> Num;
    return  Num;
}

void AddArrayElement(int AddedNumber ,int Array[],int &ArrayLength) {
    Array[ArrayLength] = AddedNumber;
    ArrayLength++;
}

void PrintArray(int ArrayLength,int Array[],const string& Message) {
    cout << Message << " ";
    for (int i =0; i <ArrayLength;i++) {
        cout  << Array[i]<<" ";
    }
    cout << endl;
}

void GetArrayValue(int ArrayLength,int Array[]) {

    for (int i =0; i < ArrayLength;i++) {
        Array[i] =RandomNumber(1,100);
    }
}
void CopyArray(const int Arr[],int Copy[], int ArrayLength,int &CopyLength) {
    for (int i = 0; i <ArrayLength;i++) {
        if (Arr[i]%2!= 0 ) {
            AddArrayElement(Arr[i],Copy,CopyLength);
        }
    }
}





int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int Array[100];
    int Copy[100];

    int CopyLength = 0;
    int ArrayLength = GetUserNumber("Add array length");
    GetArrayValue(ArrayLength,Array);
    CopyArray(Array,Copy,ArrayLength,CopyLength);

    PrintArray(ArrayLength,Array,"Main Array is : ");
    PrintArray(CopyLength,Copy,"Copied Array is : ");




    return 0;
}
 #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void Switch(int &First, int &Second) {
    int TEMP = First;
    First = Second;
    Second = TEMP;
}

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

void GetArrayValue(const int ArrayLength,int Array[]) {
    for (int i =0; i < ArrayLength;i++) {
        Array[i]  = i+1;
    }
}

void ShuffleArray(const int ArrayLength,int Array[]) {
    for (int i =0;i <ArrayLength;i++) {
        int Shuffler = RandomNumber(0,ArrayLength-1);
        Switch(Array[i],Array[Shuffler]);
    }
}

void PrintResult( const int arr[],int ArrayLength,const string& message) {
    cout << message ;
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int MainArray[500];
    int ArrayLength = GetUserNumber("Enter Array Length : ");
    GetArrayValue(ArrayLength,MainArray);
    PrintResult(MainArray,ArrayLength,"Array is : ");
    ShuffleArray(ArrayLength,MainArray);
    PrintResult(MainArray,ArrayLength,"Shuffled Array is : ");





    return 0;
}
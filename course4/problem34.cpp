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

void GetArrayValue(const int ArrayLength,int Array[]) {
    for (int i =0; i < ArrayLength;i++) {
        Array[i] =RandomNumber(1,100);
    }
}

int Search(const int Array[],int WantedNumber, int ArrayLength) {
    for (int i = 0; i <ArrayLength;i++) {
        if (Array[i] == WantedNumber) {
            return i;
        }
    }
    return -1;
}

void PrintArray(int ArrayLength,int Array[],const string& Message) {
    cout << Message << " ";
    for (int i =0; i <ArrayLength;i++) {
        cout  << Array[i]<<" ";
    }
    cout << endl;
}
void PrintResult(int WantedNumber,int WantedNumberIndex) {

    if (WantedNumberIndex == -1) {
        cout  << "The Number is not found ";
    }
    else {
        cout<<endl << "Number you are looking for is : "<< WantedNumber;
        cout<<endl << "Number found in position : "<< WantedNumberIndex ;
        cout<<endl << "Number found in order : "<< WantedNumberIndex+1 ;

    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int Array[100];
    int ArrayLength = GetUserNumber("Enter Array length");
    GetArrayValue(ArrayLength,Array);
    PrintArray(ArrayLength,Array,"Array value is : ");
    int WantedNumber = GetUserNumber("Enter number you want to look for");
    int WantedNumberIndex = Search(Array,WantedNumber,ArrayLength);
    PrintResult(WantedNumber,WantedNumberIndex);





    return 0;
}
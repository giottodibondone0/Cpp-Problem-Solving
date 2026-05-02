  #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int Search(const int Array[],int WantedNumber, int ArrayLength) {
    int i = 0;
    for ( i = 0; i <ArrayLength;i++) {
        if (Array[i] == WantedNumber) {
            return i;
        }
    }
    return -1;
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

void CopyArray(const int Arr[],int Copy[], int ArrayLength,int &CopyLength) {
    for (int i = 0; i <ArrayLength;i++) {
        if (Search(Copy,Arr[i],CopyLength) == -1) {
            continue;
        }
        else {
            AddArrayElement(Arr[i],Copy,CopyLength);
        }
    }
}

int SaveNumberInArray(int Array[]) {
    int Counter = 0;
    bool UserWantsToAdd = false;

    do {
        AddArrayElement(GetUserNumber("Please Add a number : "),Array,Counter);


        cout << "Do you want to add More Numbers ?(0/1) ";
        cin >> UserWantsToAdd;

    } while (UserWantsToAdd == true && Counter < 100);

    return Counter;
}

bool IsArrayPalindrome(int ArrayLength,const int Array[]) {

        int ArrayMiddle = ArrayLength/2;
        int ArrayEnd = ArrayLength-1;
    // if (ArrayLength%2==0) {
        for (int i = 0;i < ArrayMiddle;i++ ) {
            if (Array[i] != Array[ArrayEnd-i]){return false;}
        }
    // }
    // if (ArrayLength%2!=0) {
    //
    //     for (int i = 0;i < ArrayMiddle;i++) {
    //         if (Array[i] != Array[ArrayEnd-i]){return false;}
    //     }
    // }
    return true;
}


int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int Array[100];

    int ArrayLength = SaveNumberInArray(Array);


    PrintArray(ArrayLength,Array,"Main Array is : ");
    if (IsArrayPalindrome(ArrayLength,Array)) {
        cout<< endl <<"Array is palindrome";
    }
    else {

        cout<< endl <<"Array is not palindrome";
    }




    return 0;
}
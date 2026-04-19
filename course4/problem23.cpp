 #include <iostream>
using namespace std;

int GetArrayLength() {
    int Num;
    cout << "Enter array length";
    cin >> Num;
    while ( Num > 100) {
        cout << "Please enter a num that is <= 100";
        cin >>Num;
    }

    return  Num;
}

int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void GetArrayValue(int ArrayLength,int Array[]) {
    for (int i =0; i < ArrayLength;i++) {
         Array[i]  = RandomNumber(1,100);
    }
}





void PrintResult(int ArrayLength, int Array[]) {
    cout << "Array is : ";
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << Array[i] << " ";
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int arr[100];
    int ArrayLength = GetArrayLength();
    GetArrayValue(ArrayLength,arr);
    PrintResult(ArrayLength, arr);

    return 0;
}
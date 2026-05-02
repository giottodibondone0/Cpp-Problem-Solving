 #include <iostream>
using namespace std;
int GetUserNumber(const string& Message) {
    int Num;
    cout << Message;
    cin >> Num;
    return  Num;
}

void AddArrayElement(int UserNumber ,int Array[],int &ArrayLength) {
    ArrayLength++;
    Array[ArrayLength - 1 ] = UserNumber;
}


void PrintArray(int ArrayLength,int Array[],const string& Message) {
    cout << Message << " ";
    for (int i =0; i <ArrayLength;i++) {
        cout  << Array[i]<<" ";
    }
    cout << endl;
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

void PrintResult(int ArrayLength) {
    cout <<"Array Length =  "<<ArrayLength<<endl;

}


int main() {

int Array[100];
int ArrayLength = SaveNumberInArray(Array);

PrintResult(ArrayLength);
PrintArray(ArrayLength,Array,"Array is : ");



    return 0;
}
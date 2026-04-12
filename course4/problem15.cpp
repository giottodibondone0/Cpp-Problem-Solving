#include <iostream>
using namespace std;

int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}

void PrintPattern(int UserNumber) {
    for (int i = 1 ; i <= UserNumber; i++) {
        for (int j = i ; j >= 1; j--) {
            cout << char(i + 'A' - 1);
        }
        cout<<endl;
    }


}



int main () {
    PrintPattern(GetUserNumber());

    return 0;
}
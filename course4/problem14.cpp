#include <iostream>
using namespace std;

int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}

void PrintPattern(int UserNumber) {
    for (int i = UserNumber ; i >= 1; i--) {
        for (int j = i ; j >= 1; j--) {
            cout << char(i+64);
        }
        cout<<endl;
    }


}



int main () {
    PrintPattern(GetUserNumber());

    return 0;
}
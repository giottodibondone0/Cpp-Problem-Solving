#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "enter your age : "<< endl;
    int age;
    cin >> age;
    cin.ignore();

    cout << "do you have a license ( 1 / 0 ) ? : "<< endl;
    bool havelicense;
    cin >> havelicense;

    if (age > 21 and havelicense == true) {
        cout << "accepted" << endl;
    }
    else {
        cout << "rejected";
    }


    return 0;
}
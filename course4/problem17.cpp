#include <iostream>
#include <string>
using namespace std;

string Password() {
    string UserPassword;
    cout << "Enter a password ";
    cin >> UserPassword;
    return UserPassword;
}

void TryPassword(const string& UserPassword) {
    char FirstLetter = 0,SecondLetter = 0,ThirdLetter = 0;
    for (char i = 'A';i <= 'Z' ;i++) {
            if (i == UserPassword[0]) {
                FirstLetter = i;
            }if (i == UserPassword[1]) {
                SecondLetter = i;
            }if (i == UserPassword[2]) {
                ThirdLetter = i;
            }
        }
            cout << "Your Password is : "<<FirstLetter<<SecondLetter<<ThirdLetter<<endl;

    }



int main () {

TryPassword(Password());
    return 0;
}
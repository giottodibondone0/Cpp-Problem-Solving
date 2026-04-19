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
    short Counter = 0;
    char i =0, j=0, k=0;
    for ( i = 'A';i <= 'Z' ;i++) {

        for ( j = 'A'; j <='Z';j++) {
            for ( k = 'A'; k <= 'Z';  k++) {
                Counter++;
                    cout << i<<j<<k<<endl;

                if (i == UserPassword[0]&& j==UserPassword[1]&&k==UserPassword[2]) {
                    cout << "Your password is : "<< i<<j<<k<<endl;
                    cout << "Found after : "<<  Counter << " trials";
                    return;
                }
            }
        }


    }
}



int main () {

    TryPassword(Password());
    return 0;
}
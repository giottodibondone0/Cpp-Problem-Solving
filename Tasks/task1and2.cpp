#include <iostream>
using namespace std;


string GetName() {
    string UserName;
    cout << "Enter your Name please : "<< endl;
    getline(cin, UserName);


    return UserName;
}
void PrintName (const string& Name) {

    cout << "Your Name is : "<< Name<< endl;
}

int main () {

PrintName(GetName());

    return 0;
}
#include <iostream>
using namespace std;

int main () {

float mark1,mark2,mark3;
    cout <<"enter 3 marks : "<< endl;
    cin>>mark1 >> mark2 >> mark3;
float avg = (mark1 + mark2 + mark3) / 3;

    if (avg>=50) {
        cout << avg << endl;
        cout <<"PASS";

    }
    else {
        cout << avg << endl;
        cout <<"FAIL";
    }





    return 0;
}
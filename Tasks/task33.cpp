#include <iostream>
using namespace std;

int main () {

    float mark;
    cout <<"enter your mark : "<< endl;
    cin>>mark;


    if (mark > 100) {
        cout << "Please ented a valid mark (100 OR LESS)" << endl;
    }
    else if (mark>=90) {
        cout << "A" << endl;
    }
    else if (mark>=80) {
        cout << "B" << endl;
    }
    else if (mark>=70) {
        cout << "C" << endl;
    }
    else if (mark>=60) {
        cout << "D" << endl;
    }
    else if (mark>=50) {
        cout << "E" << endl;
    }
    else {cout << "F";}





    return 0;
}
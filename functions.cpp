#include <iostream>
using namespace std;


void mysum() {
    float num1,num2;

    cout << "enter num1";
    cin >> num1;
    cout << "enter num2";
    cin >> num2;
    cout << num1 + num2 << endl;
};
float mysum1() {

    float num1, num2;


    cout << "enter num1";
    cin >> num1;
    cout << "enter num2";
    cin >> num2;
    float sum = num1 + num2;

    return sum;
};

int main () {


    mysum();
    cout << mysum1();










    return 0;
}
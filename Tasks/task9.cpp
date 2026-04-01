#include <iostream>
using namespace std;

int main() {

    cout<< " Enter 3 numbers : ";
    float num1, num2, num3;

    cin>>num1>>num2>>num3;
    cin.ignore();

    cout<<"the sum of your numbers is : "<< num1+num2+num3;



    return 0;
}
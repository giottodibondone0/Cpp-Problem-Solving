#include <iostream>
using namespace std;


void switcher (float num1, float  num2) {





    cout<< num1<<endl<<num2<<endl;

    float num3 = num1;

    num1=num2;
    num2=num3;

    cout<<num1<<endl<<num2<<endl;

};




int main() {

    float num1, num2;
    cout<<"Enter 2 numbers : ";
    cin >> num1 >> num2;

switcher(num1, num2);



    return 0;
}
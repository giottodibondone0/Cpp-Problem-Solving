#include <iostream>
using namespace std;

float GetNum() {
    float Num ={};
    cout<<"Enter a Number";
    cin >> Num;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "please enter a valid number : ";
        cin  >> Num;

    }

    return Num;
}
float HalfTheNum(float Num) {
    float HalfNum  =Num / 2;
    return HalfNum;
}
void ShowHalfNum(float HalfNum) {
cout << "Half the num is : " << HalfNum;

}

int main() {


ShowHalfNum(HalfTheNum(GetNum()));

    return 0;
}

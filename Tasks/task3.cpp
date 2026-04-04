#include <iostream>

using namespace std;



enum enNumberType {odd = 1, even = 2};
int ReadNumber () {
    int Num;
    cout << "please enter a number";
    cin >> Num;
    return Num;
}
enNumberType CheckNumberType (int Num) {
    if (Num %   2 == 0)
        return enNumberType::even;
    else
        return enNumberType::odd;
}
void PrintNumberType (enNumberType NumberType ) {
    if (NumberType == enNumberType::odd)
        cout  << "Odd";
    else
        cout << "Even";

}



int main () {

    PrintNumberType(CheckNumberType(ReadNumber()));



    return 0;
}
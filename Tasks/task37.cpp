#include <iostream>
#include <string>
using namespace std;

float GetNumbers() {
float EnteredNumbers;
float Result ={};
    cout << "Enter the numbers : ";
    cin >>EnteredNumbers;
    while (EnteredNumbers != -99) {

        Result = Result + EnteredNumbers;
        cin >> EnteredNumbers;
    }
    return Result;
}
void PrintResult (float Result) {
    cout << Result;
}



int main() {
    PrintResult(GetNumbers());
    return 0;
}
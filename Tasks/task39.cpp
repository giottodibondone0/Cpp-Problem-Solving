#include <iostream>
#include <string>
using namespace std;

struct stTransaction {
    float Bill = {};
    float Paid = {};
};

stTransaction BillInput() {
    stTransaction value;
        cout <<"Enter The Bill value : ";
        cin >> value.Bill;

    return value;
}
stTransaction PaidInput(stTransaction value) {
    cout <<"Enter what was paid  : ";
    cin >> value.Paid;
    while (value.Paid < value.Bill) {
        cout << "Please Pay a valid number";
        cin >> value.Paid;
    }
    return value;
}

float CalcResult (stTransaction BillAndPaid) {
    return BillAndPaid.Paid - BillAndPaid.Bill;
}
void PrintResult(float Result) {
    cout << Result;
}



int main() {
PrintResult(CalcResult(PaidInput(BillInput())));
    return 0;
}
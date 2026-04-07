#include <iostream>
#include <string>
using namespace std;

    struct stTaxValue {
        const float ServiceTax = 0.10;
        const float PaymentsTax = 0.16;
    };
float GetBill () {
    float Bill;
    cout <<"Enter the bill value : ";
    cin >> Bill;
    return Bill;
}
float CalcServiceTax (float Bill) {
    stTaxValue TaxValue;
    float NewBillVal = Bill + (Bill * TaxValue.ServiceTax);
    return NewBillVal;
}
float CalcPaymentsTax (float NewBillValue, float Bill) {
    stTaxValue TaxValue;
    float FinalBillValue = NewBillValue + (Bill * TaxValue.PaymentsTax);
    return FinalBillValue;
}
void PrintFinalResult(float FinalResult) {
    cout << FinalResult;
}

int main() {
    float Bill = GetBill();
    PrintFinalResult(CalcPaymentsTax(CalcServiceTax(Bill),Bill));
    return 0;
}
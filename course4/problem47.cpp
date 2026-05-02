  #include <iostream>
using namespace std;



int main() {

    cout << "enter a num";
    float num;
    cin >> num;
    int num2 = num;

float module =  num - num2;

    if (num >= 0) {
        if (module >= 0.5) {
            cout << num2 + 1;
        } else {
            cout << num2;
        }
    }
    else {

        if (module <= -0.5) {
            cout << num2 - 1;
        } else {
            cout << num2;
        }
    }




    return 0;
}
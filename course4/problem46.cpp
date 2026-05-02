  #include <iostream>

using namespace std;



int main() {

    cout << "enter a num";
    int num;
    cin >> num;

    if (num < 0) {
        cout << num*-1;
    }
    else {cout <<  num;}



    return 0;
}
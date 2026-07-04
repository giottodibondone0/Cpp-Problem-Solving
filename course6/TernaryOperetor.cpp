
#include <iostream>
#include <string>

using namespace std;

int main() {


    short num;
    cin >> num;

    (num == 0) ? cout << "zero" : (num > 0) ? cout << " positive" : cout << "negative";

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int num = {0};
    cin >> N;

    while (N != -99 ) {

        sum = sum+N;
        cin >> N;


    }
    cout << sum;
    return 0;
}
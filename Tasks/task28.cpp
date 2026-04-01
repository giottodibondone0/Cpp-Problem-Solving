#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int num = {1};
    cin >> N;

    while (num <= N ) {

        sum= sum + num;
        num = num +2;


    }
    cout << sum;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {

   int N, sum =1;
    cout << "enter a positive num N";
    cin >> N;
    if (N <=0) {
        cout <<"please enter a positive even number";
    }
    else {
        for (int i =1; i<=N;i++) {
            sum = sum * i;
        }
    }
    cout << sum << endl;
    return 0;
}
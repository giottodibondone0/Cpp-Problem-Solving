#include <iostream>
#include <string>
using namespace std;

int main() {


   int N, sum =1;
    cout << "enter a positive num N";
    cin >> N;

    while (N<=0) {
    cout <<"Please enter a positive Num";
        cin>> N;

    }
        for (int i =1; i<=N;i++) {
            sum = sum * i;
        }

    cout << sum << endl;
    return 0;
}
    // if (N <=0) {
    //     cout <<"please enter a positive even number";
    // }
    // else {

//
// int Num,i = 1;
// int Sum = 1;
// cin>>Num;
//     while (i <= Num) {
//
//         Sum = Sum*i;
//         i++;
//     }
//     cout << Sum;

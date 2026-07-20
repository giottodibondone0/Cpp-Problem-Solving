#include <iostream>
using namespace std;

int main () {
 int arr[10];
    arr[0] = 15;
    arr[1] = 65;
    arr[2] = 32;
    arr[3] = 129;
    arr[4] = 112;
    arr[5] = 236;
    arr[6] = 2364;
    arr[7] = 312;
    arr[8] = 652;
    arr[9] = 641;


    int maxval = 0;
         maxval = arr[0];
    for (int j=1; j<=9; j++  ) {
        if (arr[j] > maxval) {
            maxval = arr[j];
        }

    }
    cout << maxval;
    return 0;
}
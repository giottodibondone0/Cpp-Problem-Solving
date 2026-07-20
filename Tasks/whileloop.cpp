#include <iostream>
#include <string>
using namespace std;

int main() {
int N;
int sum = 0;
int i =1;

    cin >> N;

while ( i <= N) {
    sum +=  i;
    i += 2;
    ;
}
cout << sum;

    return 0;
}
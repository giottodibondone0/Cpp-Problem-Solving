
#include <iostream>
#include <string>

using namespace std;

void print(int M, int N) {
    if (N <= M) {
        print(M,N+1);
        cout << N << endl;

    }
}




int main() {

print(5,1);
    return 0;
}

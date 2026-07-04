
#include <iostream>
#include <string>

using namespace std;

int factorial(int M) {
    if (M <= 1) {

        return 1;

    }
    return M*factorial(M-1);
}




int main() {
    cout <<factorial(5);
    return 0;
}

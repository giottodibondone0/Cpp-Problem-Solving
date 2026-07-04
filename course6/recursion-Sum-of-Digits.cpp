
#include <iostream>
#include <string>

using namespace std;

int sum(int M) {
    if (M <=0) {

        return 0;

    }

    return M %10 + sum(M / 10);
}




int main() {
    cout << sum(1234);
    return 0;
}

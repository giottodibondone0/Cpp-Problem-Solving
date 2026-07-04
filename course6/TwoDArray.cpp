
#include <iostream>
#include <string>

using namespace std;

int Table [10][10];




int main() {

    for (int i = 0 ; i <=9; i++) {
        for (int j = 0; j < 10 ; j++) {
            Table[i][j] = (i+1)*(j+1);
        }
    }
    for (auto & i : Table) {
        cout << endl;
        for (auto & num : i) {
            printf("%0*d ", 2, num);
        }
    }

    return 0;
}

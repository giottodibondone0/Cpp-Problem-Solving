#include <iostream>

using namespace std;


struct stUserNumbers {
    int Base = {};
    int pow = {};
};

stUserNumbers &GetNumbers(stUserNumbers &UserNumbers) {

    cout << "Enter the base ";
    cin >> UserNumbers.Base;
    cout << "Enter the power ";
    cin >> UserNumbers.pow;
    return UserNumbers;
}

int BasePow(stUserNumbers &UserNumbers) {
    if (UserNumbers.pow == 0) {
        return 1;
    }

   int result = 1;
        for (int i = 0; i < UserNumbers.pow; i++ ) {
            result *= UserNumbers.Base;
        }

    return result;
}

void PrintResult (int result ) {
    cout << "the result is : " << result;

}

int main() {
    stUserNumbers UserNumbers;
PrintResult(BasePow(GetNumbers(UserNumbers)));

    return 0;
}
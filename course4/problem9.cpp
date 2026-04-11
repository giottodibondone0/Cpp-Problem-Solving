#include <iostream>
using namespace std;

int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}
void FrequencyChecker (int UserNumber,int Numbers[]) {
    while (UserNumber!=0){
        int number = (UserNumber%10);
        UserNumber = UserNumber/10;
        ++Numbers[number];
    }
}
void PrintResult(int Numbers[]) {
    for (int i =0; i<=9; i++) {
        if (Numbers[i]!=0) {
            cout << "the frequency of digit : "<< i << " = " << Numbers[i]<<endl;
        }
    }
}


int main() {
    int Numbers[10]={0};
    int UserNumber = GetUserNumber();
    FrequencyChecker(UserNumber,Numbers);
    PrintResult(Numbers);
    return 0;
}
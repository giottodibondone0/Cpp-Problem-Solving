#include <iostream>
using namespace std;

int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}


int ReverseNumber(int UserNumber) {
    int Reversed = 0;
    while (UserNumber!=0) {
        int FirstNum = (UserNumber%10);
        UserNumber = UserNumber/10;
        Reversed = (Reversed*10)+FirstNum;

    }
    return Reversed;
}
bool CheckPalindrome(int UserNumber, int Reversed) {
    return (UserNumber == Reversed);
}

void PrintResult(bool isPalindrome) {
    if (isPalindrome) {
        cout << " Yes  it is a palindrome number";
    }
    else cout << "No it is not a palindrome number ";
}



int main () {
    int UserNum= GetUserNumber();
    PrintResult(CheckPalindrome(UserNum,ReverseNumber(UserNum)));
    return 0;
}
#include <iostream>
using namespace std;
struct stUserNumbers {
    int Number ={};
    short NumberWanted = {};
    int NumberFrequency = {};
};

stUserNumbers GetUserNumber() {
    stUserNumbers UserNumbers;
    int Num;
    cout << "Enter a number";
    cin >> UserNumbers.Number;
    cout << "Enter the number you want to get it's frequency";
    cin >> UserNumbers.NumberWanted;
    return  UserNumbers;
}
stUserNumbers FrequencyChecker(stUserNumbers UserNumbers) {



    while (UserNumbers.Number!=0){
        int number = (UserNumbers.Number%10);
        if (number == UserNumbers.NumberWanted) {
            UserNumbers.NumberFrequency++;
        }
        UserNumbers.Number = UserNumbers.Number/10;
    }

return UserNumbers;
}
void PrintResult(stUserNumbers UserNumbers) {
    cout << "The frequency of the number :  "<< UserNumbers.NumberWanted << "  is : "<< UserNumbers.NumberFrequency;
}


int main() {
PrintResult(FrequencyChecker(GetUserNumber()));
    return 0;
}
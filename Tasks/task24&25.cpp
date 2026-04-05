#include <iostream>
#include <string>
using namespace std;


int GetAge () {
int Age;
    cout << "Enter your age : ";
    cin >> Age;

    while (cin.fail() or Age <=0 or Age > 100) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "please enter a valid number : ";
        cin  >> Age;

    }

return Age;
}
bool CheckRange (int Num,int From,int To) {
    if ( From <= Num and Num <= To) {
        return true;
    }
    else {
        return false;
    }
}
void PrintResult (bool Result, int Num) {
    if (Result) {
        cout <<  to_string(Num) + " is valid";
    }
    else {
        cout <<  to_string(Num) + " is not valid";
    }
}
int GetValidAge(int From, int To) {
int ValidAge;
    do {
    ValidAge = GetAge();
    }while (CheckRange(ValidAge, From, To) == false);
return ValidAge;
}


int main () {
    int From = 18;
    int To = 45;
    int age = GetValidAge(From,To);
    PrintResult(true,age);

    return 0;
}

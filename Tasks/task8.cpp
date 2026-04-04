#include <iostream>
using namespace std;

int GetGrades() {
int Grade ={};

    cout << "enter your grade : ";
    cin >> Grade;

    while (cin.fail() or Grade <0 or Grade > 100) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "please enter a valid number : ";
        cin  >> Grade;
    }


return Grade;
}
bool IsSuccess(int Grade) {

        return (Grade >= 50);
}
void PrintState(bool state) {
    if (state) {
        cout << "you succeeded";
    }
    else {
        cout <<"you didn't make it hard luck !";
    }
}




int main() {

PrintState(IsSuccess(GetGrades()));

    return 0;
}
#include <iostream>
using namespace std;

    enum OpType{Add='+', sub = '-', mul = '*', division = '/'};
struct stOperation {
    float Num1={};
    float Num2={};
    OpType UserOp;
};

stOperation GetData(stOperation &UserInput) {

    cout << "enter two numbers ";
    cin >> UserInput.Num1 >>UserInput.Num2;
    cout << "choose the operation ( + , - , * , / )";
    char Op;
    cin >> Op;
     UserInput.UserOp = static_cast<OpType>(Op);

    return UserInput;
}
float Operation(stOperation UserInput) {

    switch (UserInput.UserOp) {
        case OpType::Add:
            return UserInput.Num1 + UserInput.Num2;
        case OpType::division:
            return UserInput.Num1 / UserInput.Num2;
        case OpType::mul:
            return UserInput.Num1*  UserInput.Num2;
        case OpType::sub:
            return UserInput.Num1-UserInput.Num2;
        default:
            cout << "Unknow operation";
            return 0;
    }

}
void PrintResult(float N) {
    cout << N;
}

int main() {
stOperation Userdata;
PrintResult(Operation(GetData(Userdata)));
    return 0;
}

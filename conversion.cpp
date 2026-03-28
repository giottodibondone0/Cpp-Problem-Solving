#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "256.684";
    string str2 = "356.445";
    string str3 = "45.1234";
    string str4 = "123.123";
    float float1 = 26.45;
    double  double1 = 57.654;
    int  int1 = (int)float1;
    int  int2 = (int)double1;

    double num1 = stoi(str);
    float num2 = stof(str2);
    float num3 = stof(str3);
    int num4 = stoi(str4);


    string st1 = to_string(float1);
    string st2 = to_string(double1);












    return 0;
}
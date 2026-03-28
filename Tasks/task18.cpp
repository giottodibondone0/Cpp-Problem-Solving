#include <iostream>
#include<cmath>
using namespace std;

double area (double r) {
    constexpr double pi = 3.14159;
    double result = pi*pow(r, 2);

return result;
}

int main() {
    float r;
    cin>>r;

    cout << ceil(area(r)) << endl;

    return 0;
}
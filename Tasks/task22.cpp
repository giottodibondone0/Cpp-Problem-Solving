#include <iostream>
#include<cmath>
using namespace std;

int main() {


    float a, b;
    float pi = 3.14;

    cin >>a>>b;

    float area = (pi*(pow(b, 2)/ 4)*((2*a-b)/(2*a+b)));
    cout<< floor(area);



    return 0;
}
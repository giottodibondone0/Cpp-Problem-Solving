#include <iostream>
#include<cmath>
using namespace std;

double resulter(double a, double d) {


    double result = (a*(sqrt(pow(d,2)-pow(a, 2))));


    return result;
}





int main() {
    float a, d;

    cin>>a>>d;

double result = resulter(a,d);
    cout<< result;



    return 0;
}
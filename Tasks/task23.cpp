#include <iostream>
#include<cmath>
using namespace std;

double area(double a, double b, double c) {
    constexpr float pi = 3.14;
    double p = (a+b+c)/2;

    double triangleArea = sqrt(p * (p-a) * (p-b) * (p-c));
    double radius = (a * b * c) / (4 * triangleArea);
    double result = pi * radius * radius;
    //double result = pi*(pow(((a*b*c)/(4*(sqrt(p*(p-a)*(p-b)*(p-c))))), 2));
 return result;
}





int main() {

    double a, b, c;
    cin>>a>>b>>c;


    cout<< round(area(a,b,c));



    return 0;
}
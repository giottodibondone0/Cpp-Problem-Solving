#include <iostream>
using namespace std;

float area(float num1, float num2) {
float result = num1 * num2;

    return result;
};


int main() {
float num1,num2;

    cout<< "enter the dimansions of the rectangle : ";
    cin>>num1>>num2;
     float result =   erea(num1, num2);
    cout<<" the erea of the rectangle : "<< result <<endl;



    return 0;
}
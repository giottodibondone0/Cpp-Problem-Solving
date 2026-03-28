#include <iostream>
using namespace std;

int main() {

    float penny;
    float nickel;
    float dime;
    float quarter;
    float dollar;

    cin>>penny>>nickel>>dime>>quarter>>dollar;

    cout<<"total amount is : "<< (penny*0.01)+(nickel*0.05)+(dime*0.10)+(quarter*0.25)+dollar<<endl;






    return 0;
}
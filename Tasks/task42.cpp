#include <iostream>
#include<cmath>
using namespace std;

int main() {

    short seconds;
    short minutes;
    short hours;
    short days;

    cin>>seconds>>minutes>>hours>>days;

    long totalseconds = seconds+(minutes*60)+(hours*60*60)+(days*24*60*60);

    cout<< totalseconds;


    return 0;
}
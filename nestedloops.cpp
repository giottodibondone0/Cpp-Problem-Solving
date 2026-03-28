#include <iostream>
#include <string>
using namespace std;



int main () {
char alphabet;
char alphabet2;

    for (alphabet = 'a';alphabet <='z';alphabet++) {
        for (alphabet2 = 'a';alphabet2<='z'; alphabet2++) {
            cout <<alphabet <<" "<< alphabet2<<endl;
        }
        cout<<endl;
    }

    return 0;
}
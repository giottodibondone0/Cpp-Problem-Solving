#include <iostream>
#include <string>
using namespace std;

int main() {

cout << "please enter string1";
    string string1 ={};
    getline(cin, string1);

cout << "please enter string2";
    string string2 ={};
    getline(cin, string2);


cout << "please enter string3";
    string string3 ={};
    getline(cin, string3);


cout<<"********************************************" << endl;


    cout << "the length of string 1 is " << string1.length() << endl;
    cout <<"chars at 0 2 4 7 are " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;
    cout << "concatenating string2 and string 3 = " << string2 + string3 << endl;
    float flt2 = stof(string2);
    float flt3 = stof(string3);

    cout << "5 * 10 = "<< flt2 * flt3;


    return 0;
}
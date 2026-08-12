    #include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;


string ReadString() {
    string S;
    cout << "Please Enter Your String?\n";
    getline(cin, S);
    return S;
}


int WordsSize(const string &Sentence) {
    int counter = 0;
    string temp;
    for (char i : Sentence) {
        if (i == ' ') {
            if (temp != "") {
               counter++;
            }
            temp = "";
            continue;
        }
        temp += i;
    }
    if (temp != "") {
        counter++;
    }
    return counter;

}


void Print(const vector<string> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << endl ;

    }
}



int main() {

    string s = ReadString();

    cout<<WordsSize(s);


    return 0;
}
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

enum Trims{Right, Left, All};

string ReadString() {
    string S;
    cout << "Please Enter Your String?\n";
    getline(cin, S);
    return S;
}


string Join(const vector<string>& Words, const string& Seperator) {
    string S;

    if (!Words.empty()) {
        S += Words[0];
        for (int i =1; i< Words.size(); i++) {
            S += Seperator;
            S += Words[i];

        }
    }
    else {
        return "vector is empty";
    }

return S;
}


void Print(const vector<string> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << endl ;

    }
}



int main() {

     vector<string>  words = {"asd","asd","asd","asd","asd","asd","asd"};

    cout << Join(words," ");

    return 0;
}
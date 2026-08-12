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

vector<char> FirstLetter(const string &Sentence) {
    vector<char> Result;

    if (!Sentence.empty()) {
        Result.push_back(Sentence[0]);
    }

    for (int i = 1; i < Sentence.length(); i++) {

        if (Sentence[i] != ' ' and Sentence[i-1] ==' ' ) {
            Result.push_back(Sentence[i]);
        }
    }

    return Result;
}

void Print(const vector<char> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << "\t" ;

    }
}



int main() {

Print(FirstLetter(ReadString()));



    return 0;
}
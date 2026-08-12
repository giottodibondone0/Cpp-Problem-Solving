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

string FirstLetter( string &Sentence) {

    if (!Sentence.empty()) {
        Sentence[0] = toupper(static_cast<unsigned char>(Sentence[0]));
    }

    for (int i = 1; i < Sentence.length(); i++) {

        if (Sentence[i] != ' ' and Sentence[i-1] ==' ' ) {
            Sentence[i] = toupper(static_cast<unsigned char>(Sentence[i]));
        }
    }

    return Sentence;
}

void Print(const vector<char> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << "\t" ;

    }
}



int main() {

    string s = ReadString();

    cout << FirstLetter(s);



    return 0;
}
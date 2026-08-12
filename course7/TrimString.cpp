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


string Trim(const string &Sentence, Trims TrimWhat) {
    string TrimedString = Sentence;
    if (TrimWhat == Left or TrimWhat == All) {
    bool hasLetters = false;
        for (int i = 0; i < TrimedString.size(); i++) {
            if (TrimedString[i] != ' ' ) {
                TrimedString.erase(0,i);
                hasLetters = true;
                break;
            }
        }
        if (!hasLetters) return "";
    }
    if (TrimWhat == Right or TrimWhat == All) {
        bool hasLettersRight = false;
        for (int i = TrimedString.size() - 1; i >= 0; i--) {
            if (TrimedString[i] != ' ' ) {
                TrimedString.erase(i + 1);
                hasLettersRight = true;
                break;
            }
        }
        if (!hasLettersRight) return "";
    }

        return TrimedString;

}


void Print(const vector<string> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << endl ;

    }
}



int main() {

    string s = ReadString();

    cout << Trim(s,Trims::All);

    return 0;
}
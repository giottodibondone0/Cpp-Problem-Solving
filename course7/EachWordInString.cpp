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


void GetWords( string &Sentence, vector<string> &vWords) {

        string temp;
    for (char i : Sentence) {
        if (i == ' ') {
            if (temp != "") {
                vWords.push_back(temp);
            }
            temp = "";
            continue;
        }
         temp += i;
    }
    vWords.push_back(temp);

}


void Print(const vector<string> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << endl ;

    }
}



int main() {
    vector<string> words;
    string s = ReadString();

    GetWords(s,words);

    Print(words);


    return 0;
}
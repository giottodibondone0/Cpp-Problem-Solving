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





string ChangeCase( string &Sentence) {
    for (int i =0; i < Sentence.size(); i++) {


        if (Sentence[i] >= 'a' and Sentence[i] <='Z') {

            Sentence[i] = tolower(static_cast<unsigned char>(Sentence[i]));
        }
        else {
            Sentence[i] = toupper(static_cast<unsigned char>(Sentence[i]));
        }

    }
        return Sentence;
}




int main() {

    string s = ReadString();

    cout << ChangeCase(s);



    return 0;
}
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





int CountLetter(const string &Sentence,const char Letter) {

    int counter = 0;
    for (char ch : Sentence) {

        if (ch==Letter) {
            counter++;
        }

    }
    return counter;

}




int main() {

    string s = ReadString();
    char Letter;
    cin >> Letter;

    cout << CountLetter(s,Letter);


    return 0;
}
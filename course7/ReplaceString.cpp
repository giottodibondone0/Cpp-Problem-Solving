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


string ReplaceString( string Sentence, const string& Replaced,const string& Replacer) {
    string temp = Sentence;
    while (temp.find(Replaced) != string::npos){
    size_t StartIndex = temp.find(Replaced);

        temp.replace(StartIndex,Replaced.size(),Replacer);

    }
    return temp;
}


void Print(const vector<string> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << endl ;

    }
}



int main() {

    cout << ReplaceString("i like apples","apples","oranges");

    return 0;
}
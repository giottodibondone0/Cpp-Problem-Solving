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

enum enMatchCase { MatchCase, DontMatchCase };

string ReadString() {
    string S;
    cout << "Please Enter Your String?\n";
    getline(cin, S);
    return S;
}

void ChangeCase( string &Sentence) {
    for (int i =0; i < Sentence.size(); i++) {


            Sentence[i] = tolower(static_cast<unsigned char>(Sentence[i]));


    }
}
string ReplaceStringNonCustom( string Sentence, const string& Replaced,const string& Replacer) {


    string SentenceTemp = Sentence;
    string Result = Sentence;

    size_t pos = 0;
    while ((pos = SentenceTemp.find(Replaced, pos)) != string::npos) {

        Result.erase(pos,Replaced.size());
        SentenceTemp.erase(pos,Replaced.size());
        Result.insert(pos,Replacer);
        SentenceTemp.insert(pos,Replacer);



        pos += Replacer.size();
    }


    return Result;
}


string ReplaceString(const string &Sentence, const string& Replaced,const string& Replacer, enMatchCase MatchType ) {
    if (MatchType == MatchCase) {
       return  ReplaceStringNonCustom(Sentence,Replaced,Replacer);

    }
    string SentenceTemp = Sentence;
    string ReplacedTemp = Replaced;
    string Result = Sentence;
        //lowering all chars in the copy of the sentence and the word we are looking for
     ChangeCase(SentenceTemp);
     ChangeCase(ReplacedTemp);




    size_t pos = 0;
    while ((pos = SentenceTemp.find(ReplacedTemp, pos)) != string::npos) {

    Result.erase(pos,ReplacedTemp.size());
    SentenceTemp.erase(pos,ReplacedTemp.size());
    Result.insert(pos,Replacer);
    SentenceTemp.insert(pos,Replacer);



        pos += Replacer.size();
    }




    return Result;
}


void Print(const vector<string> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << endl ;

    }
}



int main() {


    string s = "i like ApPLeS and ApPLeS";
    cout << ReplaceString(s,"ApPLeS","oranges",MatchCase);

    return 0;
}
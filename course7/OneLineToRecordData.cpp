    #include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
using namespace std;


struct stClientData {
    string AccountNumber ={};
    string PINCode ={};
    string Name{};
    string PhoneNumber{};
    double AccountBalance ={};
};



void PrintStruct(    const stClientData& CurrentClient) {

    cout<<endl << "account number : " <<CurrentClient.AccountNumber;


    cout<<endl << "PIN code"<< CurrentClient.PINCode;


    cout<<endl << "account name"<<CurrentClient.Name;

    cout<<endl << "account phone number"<< CurrentClient.PhoneNumber;

    cout<<endl << "account balance"<< CurrentClient.AccountBalance;


}

void GetWords( string Sentence, vector<string> &vWords, const string& Separator = " ") {
    string SentenceCopy =Sentence;
    string temp;
    size_t pos = 0;
    while ((pos = SentenceCopy.find(Separator)) != string::npos) {

        temp = SentenceCopy.substr(0, pos);
        vWords.push_back(temp);
        temp = "";
        SentenceCopy.erase(0, pos + Separator.length());

    }
    if (!SentenceCopy.empty()) {
        vWords.push_back(SentenceCopy);

    }
}

stClientData PutDataInStruct(string Line, const string& Separator = " ") {
    stClientData Client;
    vector<string> vClientData;

    GetWords(Line, vClientData, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PINCode       = vClientData[1];
    Client.Name          = vClientData[2];
    Client.PhoneNumber   = vClientData[3];

    Client.AccountBalance = stod(vClientData[4]);

    return Client;

}




int main() {

string Data ="A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";

    PrintStruct(PutDataInStruct(Data,"#//#"));


    return 0;
}
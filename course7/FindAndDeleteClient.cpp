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

string Join(const stClientData& Client, const string& Seperator = " ") {
    string S;

    S+=Client.AccountNumber;
    S+= Seperator;
    S+=Client.PINCode;
    S+= Seperator;
    S+=Client.Name;
    S+= Seperator;
    S+=Client.PhoneNumber;
    S+= Seperator;
    S+= to_string(Client.AccountBalance);




    return S;
}


void PrintStruct(    const stClientData& CurrentClient) {

    cout<<endl << "account number : " <<CurrentClient.AccountNumber;


    cout<<endl << "PIN code : "<< CurrentClient.PINCode;


    cout<<endl << "account name : "<<CurrentClient.Name;

    cout<<endl << "account phone number : "<< CurrentClient.PhoneNumber;

    cout<<endl << "account balance : "<< CurrentClient.AccountBalance;


}

void GetWords( string Sentence, vector<string> &vWords, const string& Separator) {
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

vector<stClientData> LoadClientsFromFile(const string& FileName,const string& AccountNumber, const string& Separator = " ") {
    vector<stClientData> vClients;
    fstream MyFile;


    MyFile.open(FileName, ios::in);
    if (MyFile.is_open()) {

            string Line;
            bool UserFound = false;

        while (getline(MyFile, Line)) {

            if (Line.empty()) {
                continue;
            }

            stClientData Client = PutDataInStruct(Line, Separator);


            if (AccountNumber == Client.AccountNumber) {
                UserFound = true;
                bool DeleteClient;
                PrintStruct(Client);
                cout<< endl << "User Found, are you sure you want to delete this client ? "<<endl;
                cin >> DeleteClient;

                if (DeleteClient) {
                    cout << "Client deleted successsfully";
                    continue;
                }
            }


            vClients.push_back(Client);
        }

        MyFile.close();
            if (UserFound == false) {
                cout << "User Not Found !";
            }
    }

    return vClients;
}

void UpdateFile(const string& FileName, const string& AccountNumber, const string& Separator = " ") {
    fstream MyFile;
    vector<stClientData> UpdatedData = LoadClientsFromFile(FileName,AccountNumber,Separator);

    MyFile.open(FileName, ios::out);


    string ClientLine;

    if (MyFile.is_open()) {

            for (const auto& Client : UpdatedData) {
               ClientLine = Join(Client,Separator);
                MyFile << ClientLine<<endl;
            }

    }

    MyFile.close();
}






int main() {
    string AccountNumber;
    cout<< endl << "enter account number : ";
    cin >>  AccountNumber;

    UpdateFile("Clients.txt",AccountNumber);

    return 0;
}
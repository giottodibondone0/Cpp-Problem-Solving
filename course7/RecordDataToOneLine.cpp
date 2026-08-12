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


struct ClientData {
    string AccountNumber ={};
    string PINCode ={};
    string Name{};
    string PhoneNumber{};
    double AccountBalance ={};
};

string Join(const ClientData& Client, const string& Seperator = " ") {
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

ClientData GetStructData() {
    ClientData CurrentClient;

    cout<<endl << "enter your account number";
    getline(cin, CurrentClient.AccountNumber);

    cout<<endl << "enter your PIN code";
    getline(cin, CurrentClient.PINCode);

    cout<<endl << "enter your account name";
    getline(cin, CurrentClient.Name);

    cout<<endl << "enter your account phone number";
    getline(cin, CurrentClient.PhoneNumber);

    cout<<endl << "enter your account balance";
    cin >> CurrentClient.AccountBalance;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return CurrentClient;


}









int main() {

cout << Join(GetStructData());

    return 0;
}
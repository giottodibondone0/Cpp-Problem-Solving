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
#include <iomanip>


using namespace std;


struct stClientData {
    string AccountNumber ={};
    string PINCode ={};
    string Name{};
    string PhoneNumber{};
    double AccountBalance ={};
};


    string FileName = "Clients.txt";
    string Separator = " ";

int ShowMainScreen();

void ShowClientList();
void AddClient();
void DeleteClientScreen();
void UpdateClintInfo();
void FindAccount();
void ShowTransactionsMenu();






int main() {

     int Chioce;

   do {
    Chioce = ShowMainScreen();

       switch (Chioce) {
           case 1:
               ShowClientList();
               break;
           case 2:
               AddClient();
               break;
           case 3:
               DeleteClientScreen();
               break;
           case 4:
               UpdateClintInfo();
               break;
           case 5:
               FindAccount();
               break;
           case 6:
               ShowTransactionsMenu();
               break;
           case 7:
               break;
           default:
               cout << "Invalid Choice! Please enter a number between 1 and 7.\n";
               break;
       }


   }while (Chioce != 7);



    return 0;
}






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
stClientData PutDataInStruct(string Line, const string& Separator ) {
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
void PrintStruct(const stClientData& CurrentClient) {

    cout << "| " << left << setw(15) << CurrentClient.AccountNumber
     << "| " << setw(10) << CurrentClient.PINCode
     << "| " << setw(20) << CurrentClient.Name
     << "| " << setw(15) << CurrentClient.PhoneNumber
     << "| " << setw(10) << CurrentClient.AccountBalance << endl;


}


vector<stClientData> LoadClientsFromFileMain() {
    vector<stClientData> vClients;
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            if (Line.empty()) {
                continue;
            }

            stClientData Client = PutDataInStruct(Line, Separator);

            vClients.push_back(Client);

        }
        MyFile.close();
    }
    return vClients;

}
void UpdateFileMain( vector<stClientData> UpdatedClientsList) {
    fstream MyFile;
    MyFile.open(FileName, ios::out);
    string ClientLine;

    if (MyFile.is_open()) {

        for (const auto& Client : UpdatedClientsList) {
            ClientLine = Join(Client,Separator);
            MyFile << ClientLine<<endl;
        }

    }

    MyFile.close();



}
bool FindClientMain(string AccountNumber) {

    vector<stClientData> ClientsList = LoadClientsFromFileMain();

    for (const auto& Client : ClientsList ) {
        if (AccountNumber == Client.AccountNumber) {

            return true;

        }
    }

    return false;
}










int ShowMainScreen() {
    cout << "===================================="<<endl;
    cout << "              Main Menu             "<<endl;
    cout << "===================================="<<endl;
    cout << "[1] Show Client List"<<endl;
    cout << "[2] Add New Client"<<endl;
    cout << "[3] Delete Client"<<endl;
    cout << "[4] Update ClientInfo"<<endl;
    cout << "[5] FindClient"<<endl;
    cout << "[6] Transactions"<<endl;
    cout << "[7] exit"<<endl;
    cout << "===================================="<<endl;
    cout << "Choose what do you want to do? [1 to 6]? "<<endl;
    int choice;
    cin >> choice;
    return choice;
}


void ShowClientList() {
    vector<stClientData> clients;

    clients = LoadClientsFromFileMain();

        int counter = clients.size();

cout <<"                           Clients List "<< "(" << counter << ")"<< "Clients."<<endl;
cout<< "-----------------------------------------------------------------------------------------------------------------------"<<endl;
cout<< "| " << left << setw(15) << "account number"
    << "| " << setw(10) << "PIN Code"
    << "| " << setw(20) << "Client Name"
    << "| " << setw(15) << "Phone"
    << "| " << setw(10) << "Balance" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------"<<endl;



    for (auto& Client  : clients) {

        PrintStruct(Client);
    }
    cout << "----------------------------------------------------------------------------------------------------------------------"<<endl;
    system("pause");
}






void AddDataLineToFile(const string &DataLine) {
    fstream MyFile;
    MyFile.open("Clients.txt", ios::out | ios::app);

    if (MyFile.is_open()) {
        MyFile << DataLine << endl;
        MyFile.close();

    }
}
stClientData GetStructData(string AccountNumber) {
    stClientData CurrentClient;


    CurrentClient.AccountNumber = AccountNumber;

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
void AddNewClient(string AccountNumber) {

    bool AddClient;


        AddDataLineToFile( Join(GetStructData(AccountNumber),Separator));


}

void AddClient() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    string AccountNumber;
    bool TryAgain = true;
    bool IsFound;

    do {
        cout << "Enter AccountNumber";
        getline(cin,AccountNumber);

        IsFound = FindClientMain( AccountNumber);

        if (IsFound) {
            cout << "User Already exists!"<<endl;
            cout << "Do you want to try again ? "<<endl;
            cin >> TryAgain;

        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

        }

    } while (IsFound and TryAgain);


    if (!IsFound) {
        AddNewClient(AccountNumber);
    }

}



vector<stClientData> DeleteClient(const string& AccountNumber) {
    vector<stClientData> vClients;
    fstream MyFile;


    MyFile.open(FileName, ios::in);
    if (MyFile.is_open()) {
            string Line;

        while (getline(MyFile, Line)) {

            if (Line.empty()) {
                continue;
            }

            stClientData Client = PutDataInStruct(Line, Separator);


            if (AccountNumber == Client.AccountNumber) {
                    continue;
            }


            vClients.push_back(Client);
        }

        MyFile.close();

    }

    return vClients;
}
void DeleteClientScreen() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    string AccountNumber;
    bool ConfirmDelete = false;
    cout<< endl << "enter account number : ";
    getline(cin,AccountNumber);
    bool AccountFound = false;

    if (FindClientMain(AccountNumber)) {
        vector<stClientData> ClientsList = LoadClientsFromFileMain();
        for (const auto& Client : ClientsList ) {

            if (AccountNumber == Client.AccountNumber) {

                AccountFound = true;
                PrintStruct(Client);
                cout << endl;
                cout << "User Found, Are You Sure You Want To Delete This Client?";
                cin >> ConfirmDelete;
                break;

            }
        }


        if (ConfirmDelete) {
            UpdateFileMain(DeleteClient(AccountNumber));
            cout << "User Deleted Successfully "<<endl;
        }else {
            cout << "Deletion Cancelled"<<endl;
        }


    }else {
        cout << "Not Found"<<endl;
    }


    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}










vector<stClientData> EditClient(const string& AccountNumber) {
    vector<stClientData> vClients;
    fstream MyFile;


    MyFile.open(FileName, ios::in);
    if (MyFile.is_open()) {

        string Line;
        while (getline(MyFile, Line)) {

            if (Line.empty()) {
                continue;
            }

            stClientData Client = PutDataInStruct(Line, Separator);


            if (AccountNumber == Client.AccountNumber) {
                PrintStruct(Client);

                    cout << "enter name : "<< endl;
                    getline(cin >> ws, Client.Name);
                    cout << "enter balance : "<< endl;
                    cin >> Client.AccountBalance;
                    cout << "Client phone number : "<< endl;
                    cin >> Client.PhoneNumber;
                    cout  << "Client PIN code : "<< endl;
                    cin >> Client.PINCode;
            }


            vClients.push_back(Client);
        }

        MyFile.close();

    }

    return vClients;
}
void UpdateClintInfo() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    bool ConfirmEdit;
    string AccountNumber;
    cout<< endl << "enter account number : ";
    cin >>  AccountNumber;

    bool UserFound = FindClientMain(AccountNumber);

    if (!UserFound) {
        cout << "User Not Found ";
    }

    else {
        cout<< endl << "User Found, are you sure you want to edit this client ? "<<endl;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin >> ConfirmEdit;

        if (ConfirmEdit) {
            UpdateFileMain(EditClient(AccountNumber));
            cout << "Client Edited Successfully"<<endl;
        }
    }

}







void FindAccount() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    string AccountNumber;
    cout<< endl << "enter account number : ";
    cin >>  AccountNumber;

    bool AccountExists = FindClientMain(AccountNumber);

    if (AccountExists) {
        vector<stClientData> clients;
        clients = LoadClientsFromFileMain();

        for (auto& Client  : clients) {

            if (Client.AccountNumber == AccountNumber ) {
                PrintStruct(Client);
                cout << endl;
                break;

            }

        }

    }
    else {
        cout << "User Doesn't Exist"<<endl;
    }

    system("pause");

}


bool DepositBalanceToClientByAccountNumber(string AccountNumber, double Amount) {
    bool ConfirmTransaction = false;
    cout << "\n\nAre you sure you want perform this transaction? (1/0)? ";
    cin >> ConfirmTransaction;

    if (ConfirmTransaction) {
        vector<stClientData> vClients = LoadClientsFromFileMain();

        for (auto& C : vClients) {
            if (C.AccountNumber == AccountNumber) {
                C.AccountBalance += Amount;
                UpdateFileMain(vClients);
                cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance << endl;
                return true;
            }
        }
    }
    else {
        cout << "\nTransaction Cancelled.\n";
    }
    return false;
}

void ShowDepositScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tDeposit Screen";
    cout << "\n-----------------------------------\n";

    string AccountNumber;
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;

    while (!FindClientMain(AccountNumber)) {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        cout << "Please enter AccountNumber? ";
        cin >> AccountNumber;
    }

    vector<stClientData> vClients = LoadClientsFromFileMain();
    for (const auto& C : vClients) {
        if (C.AccountNumber == AccountNumber) {
            PrintStruct(C);
            break;
        }
    }

    double Amount = 0;
    cout << "\nPlease enter deposit amount? ";
    cin >> Amount;

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount);
}

void ShowWithDrawScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tWithdraw Screen";
    cout << "\n-----------------------------------\n";

    string AccountNumber;
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;

    while (!FindClientMain(AccountNumber)) {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        cout << "Please enter AccountNumber? ";
        cin >> AccountNumber;
    }

    vector<stClientData> vClients = LoadClientsFromFileMain();
    double CurrentBalance = 0;
    for (const auto& C : vClients) {
        if (C.AccountNumber == AccountNumber) {
            PrintStruct(C);
            CurrentBalance = C.AccountBalance;
            break;
        }
    }

    double Amount = 0;
    cout << "\nPlease enter withdraw amount? ";
    cin >> Amount;

    while (Amount > CurrentBalance) {
        cout << "\nAmount Exceeds the balance, you can withdraw up to : " << CurrentBalance << endl;
        cout << "Please enter another amount? ";
        cin >> Amount;
    }

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount * -1);
}

void ShowTotalBalances() {
    vector<stClientData> vClients = LoadClientsFromFileMain();
    double TotalBalances = 0;

    cout << "\n\t\t\t\tBalances List (" << vClients.size() << ") Client(s).";
    cout << "\n------------------------------------------------------------------------------------------------\n";
    cout << "| " << left << setw(15) << "Account Number"
         << "| " << setw(30) << "Client Name"
         << "| " << setw(12) << "Balance" << endl;
    cout << "------------------------------------------------------------------------------------------------\n";

    for (const auto& C : vClients) {
        cout << "| " << left << setw(15) << C.AccountNumber
             << "| " << setw(30) << C.Name
             << "| " << setw(12) << C.AccountBalance << endl;

        TotalBalances += C.AccountBalance;
    }
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\t\tTotal Balances = " << TotalBalances << endl;
}

void ShowTransactionsMenu() {
    int Choice;
    do {
        system("cls");
        cout << "===========================================\n";
        cout << "\t\tTransactions Menu Screen\n";
        cout << "===========================================\n";
        cout << "\t[1] Deposit.\n";
        cout << "\t[2] Withdraw.\n";
        cout << "\t[3] Total Balances.\n";
        cout << "\t[4] Main Menu.\n";
        cout << "===========================================\n";
        cout << "Choose what do you want to do? [1 to 4]? ";
        cin >> Choice;

        switch (Choice) {
            case 1:
                ShowDepositScreen();
                system("pause");
                break;
            case 2:
                ShowWithDrawScreen();
                system("pause");
                break;
            case 3:
                ShowTotalBalances();
                system("pause");
                break;
            case 4:
                break;
            default:
                cout << "Invalid Choice! Please enter a number between 1 and 4.\n";
                system("pause");
                break;
        }
    } while (Choice != 4);
}

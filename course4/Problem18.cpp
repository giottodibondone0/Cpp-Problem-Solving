#include <iostream>
#include <string>
using namespace std;

string Password() {
    string UserPassword;
    cout << "Enter a password ";
    getline(cin, UserPassword);
    cout << "Password before encryption : "<< UserPassword<<endl;
    return UserPassword;
}
string Encrypt(string Password,int EncryptVal) {
    for (int i = 0 ; i < Password.length(); i++) {
        Password[i] = static_cast<char>(Password[i] - EncryptVal);
    }
    cout << "Password after encryption : "<< Password<<endl;
    return Password;
}
string Decrypt(string EcryptedPassword,int EncryptVal) {
    for (int i = 0 ; i < EcryptedPassword.length(); i++) {
        EcryptedPassword[i] = static_cast<char>(EcryptedPassword[i] - EncryptVal);
    }
    cout << "Password after Decryption : "<< EcryptedPassword;
    return EcryptedPassword;
}


int main () {
    int Encryptval = 2;
    Decrypt(Encrypt(Password(),Encryptval),Encryptval);
    return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int AddNumber() {

    cout << "add a number "<<endl;
    int Number={};
    cin >> Number;

    return Number;
}

void AddToVector( vector<int>& Numbers) {
       bool AddAnotherNumber= {};

   do {
       Numbers.push_back(AddNumber());

       cout << "do you want to add another number ? ( 1 / 0 ) ";
       cin >> AddAnotherNumber;
   } while (AddAnotherNumber);
}

void PrintNumbers(const vector<int>& Numbers) {
 for (const int& i :Numbers) {
     cout <<i<<endl;
 }
}





int main() {
    vector<int> Numbers;

    AddToVector(Numbers);
    PrintNumbers(Numbers);

    return 0;
}

#include <iostream>
using namespace std;

void PrintHeader() {
    cout << "\t\t\t\t Multiplication table from 1 to 10 \t\t\t \n \t";
    for (int i = 1; i<= 10; i++ ) {
        cout<< "\t" << i;
    }
    cout <<endl << "---------------------------------------------------------------------------------------------------";

}
void MultiTable() {
    for (int i = 1;i<=10;i++) {
        cout<<endl << i << "\t|";

        for (int j = 1; j <=10; j++) {
            cout<<"\t" <<i*j;
        }
    }

}


int main() {

    PrintHeader();
    MultiTable();


}
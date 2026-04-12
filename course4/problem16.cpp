#include  <iostream>
using namespace std;


void PrintAll() {
    for (int i = 'A';i <= 'Z' ;i++) {
        for (int j = 'A'; j <='Z';j++) {
            for (int k = 'A'; k <= 'Z';  k++) {
                cout << char(i)<<char(j)<<char(k)<<endl;
            }
        }
    }


}






int main () {
PrintAll();


    return 0;
}
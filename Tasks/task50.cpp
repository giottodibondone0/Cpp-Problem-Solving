    #include <iostream>
    using namespace std;

    int main () {

    int PIN = 1234;
    int EPIN;
    int Balance = 7500;
    int i = 1;
        cout << "Please enter the PIN code : " << endl;
        cin >> EPIN;


        while (EPIN != PIN and i < 3 ) {
            cout <<  "Please enter the right PIN" <<endl;
        cin >> EPIN;
            i++;
        }
            if (EPIN == PIN) {
                cout << "card balance is  " << Balance;
            }
            else {
                cout <<"card is locked";
            }


        return 0;
    }
    #include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;




// void FillMatrix( vector<vector<int>>& Matrix) {
//     int i =1;
//     for (auto& rows:Matrix) {
//         for (int& val : rows) {
//             val =i;
//             i++;
//         }
//     }
// }



int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrix( vector<vector<int>>& Matrix) {
    for (auto& rows:Matrix) {
        for (int& val : rows) {
            val = RandomNumber(0,100);
        }
    }
}

bool IsPalindrome(const vector<vector<int>>& Matrix) {
    for (int i = 0 ; i < Matrix.size(); i++) {
        for (int j =0 ; j < Matrix[0].size() / 2 ; j++) {
            if (Matrix[i][Matrix[i].size() - 1 - j] != Matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}


void Print(const vector<vector<int>> &Matrix) {
    cout<<endl << "---------------------------------------"<<endl;
    for (const auto& row:Matrix) {
        for (int val:row) {
            cout << val << "\t";

        }
        cout << endl;
    }
}
void Print(const vector<int> &SumsVector) {
    cout<<endl << "---------------------------------------"<<endl;

    for (const auto& val:SumsVector) {

        cout << val << "\t" ;

    }
}





int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int Rows = 3;
    int Columns = 3;
    vector<vector<int>> Matrix = {
        {1,0,1},
        {0,1,0},
        {2,1,1}
    }; vector<vector<int>> Matrix1 = {
        {1,0,4},
        {0,1,0},
        {0,0,1}
    };


    //FillMatrix(Matrix);
    Print(Matrix);

    if (IsPalindrome(Matrix)) {
        cout<<endl << "Matrix is palindrome";
    }
    else {
        cout<<endl << "Matrix is not palindrome";

    }








    return 0;
}
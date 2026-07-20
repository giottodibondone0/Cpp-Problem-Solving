    #include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;


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

int CalcColumnSum(const vector<vector<int>> &Matrix, int ColumnNum) {

    int sum = 0;
    for (int i = 0; i <Matrix.size(); i++) {
        sum = sum + Matrix[i][ColumnNum];
    }

    return sum;
}

void Print(const vector<vector<int>> &Matrix) {
    for (const auto& row:Matrix) {
        for (int val:row) {
            cout << val << "\t";

        }
        cout << endl;
    }
}
void Print(const vector<int> &SumsVector) {
    for (const auto& val:SumsVector) {

        cout<<endl << val ;

    }
}





int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int Rows = 3;
    int Columns = 3;
    vector<vector<int>> Matrix(Rows, vector<int>(Columns));


    FillMatrix(Matrix);
    Print(Matrix);

    for (int i = 0; i < Columns;i++ ) {
        cout<<endl << CalcColumnSum(Matrix,i);
    }







    return 0;
}
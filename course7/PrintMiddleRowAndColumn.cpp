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

vector<int> GetMidRow(const vector<vector<int>>& Matrix,int Rows, int Columns) {
    vector<int> MidRow;

    int i = (Rows % 2 == 0) ? (Rows - 1) / 2 : Rows / 2;
    for (int j = 0; j < Columns; j++ ) {
        MidRow.push_back(Matrix[i][j]);

    }
    return MidRow;
}
vector<int> GetMidColumn(const vector<vector<int>>& Matrix,int Rows, int Columns) {
    vector<int> MidColumn;
    int i = (Columns % 2 == 0) ? (Columns - 1) / 2 : Columns / 2;
    for (int j = 0; j < Rows; j++ ) {
        MidColumn.push_back(Matrix[j][i]);

    }
    return MidColumn;
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
    vector<vector<int>> Matrix(Rows, vector<int>(Columns));



    FillMatrix(Matrix);
    Print(Matrix);

    Print(GetMidRow(Matrix,Rows,Columns));
    Print(GetMidColumn(Matrix,Rows,Columns));








    return 0;
}
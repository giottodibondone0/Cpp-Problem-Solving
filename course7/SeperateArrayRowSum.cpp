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

int CalcRowSum(const vector<vector<int>> &Matrix, int RowNum) {

        int sum = 0;
    for (int i = 0; i < Matrix[RowNum].size(); i++) {
        sum = sum + Matrix[RowNum][i];
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

void SaveinVector( vector<int>& sums,int Rows,const vector<vector<int>>& Matrix) {
    for (int i = 0 ; i < Rows; i++) {
        sums.push_back(CalcRowSum(Matrix, i));
    }
}



int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    vector<vector<int>> Matrix(3, vector<int>(3));
    vector<int> Rows;


    FillMatrix(Matrix);

    SaveinVector(Rows,3,Matrix);
    Print(Matrix);
    Print(Rows);








    return 0;
}
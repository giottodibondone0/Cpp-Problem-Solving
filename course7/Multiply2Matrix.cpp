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

void MultiplyMatrix(const vector<vector<int>> &Matrix1,const vector<vector<int>> &Matrix2,vector<vector<int>> &ResultMatrix,int Rows,int Columns) {
    for (int i = 0; i< Rows;i++) {
        for (int j = 0;j<Columns;j++) {
            ResultMatrix[i][j] = Matrix1[i][j]*Matrix2[i][j];

        }
    }
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

        cout<<endl << val ;

    }
}





int main() {

    srand(static_cast<unsigned>(time(nullptr)));

    int Rows = 3;
    int Columns = 3;
    vector<vector<int>> Matrix(Rows, vector<int>(Columns));
    vector<vector<int>> Matrix2(Rows, vector<int>(Columns));
    vector<vector<int>> ResultMatrix(Rows, vector<int>(Columns));


    FillMatrix(Matrix);
    FillMatrix(Matrix2);

    MultiplyMatrix( Matrix,Matrix2,ResultMatrix,Rows,Columns);

    Print(Matrix);
    Print(Matrix2);
    Print(ResultMatrix);







    return 0;
}
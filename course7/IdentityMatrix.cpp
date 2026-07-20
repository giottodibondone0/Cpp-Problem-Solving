    #include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;




void FillMatrix( vector<vector<int>>& Matrix) {
    int i =1;
    for (auto& rows:Matrix) {
        for (int& val : rows) {
            val =i;
            i++;
        }
    }
}

bool IdentityMatrix(const vector<vector<int>> &Matrix,int Rows,int Columns) {
    if (Rows != Columns) return false;

    for (int i =0; i<Rows;i++) {
        for (int j = 0; j<Columns;j++) {
            if (i == j and Matrix[i][j] != 1) {
                return false;
            }
            else if(i != j and Matrix[i][j] != 0){
                return false;
            }
        }
    }
    return true;
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
    int Rows = 3;
    int Columns = 3;
    vector<vector<int>> Matrix = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };


    //FillMatrix(Matrix);
    Print(Matrix);

    if (IdentityMatrix(Matrix,Rows,Columns)) {
        cout<< endl << "Matrix is identity";
    }
    else {
        cout<< endl << "Matrix is not Identity";
    }





    return 0;
}
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

bool SparseMatrix(const vector<vector<int>> &Matrix,int Rows,int Columns) {
    int Zeros =0;
    int NonZeros =0;
   for (auto& Row:Matrix) {
       for(auto& val : Row) {
           if (val == 0) {
               Zeros++;
           }
           else {
               NonZeros++;
           }
       }
   }
    if (Zeros < NonZeros) {
        return  false;
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
    int Rows = 3;
    int Columns = 3;
    vector<vector<int>> Matrix = {
        {1,0,4},
        {0,1,0},
        {2,0,1}
    };


    //FillMatrix(Matrix);
    Print(Matrix);

    if (SparseMatrix(Matrix,Rows,Columns)) {
        cout<< endl << "Matrix is sparse";
    }
    else {
        cout<< endl << "Matrix is not sparse";
    }


    return 0;
}
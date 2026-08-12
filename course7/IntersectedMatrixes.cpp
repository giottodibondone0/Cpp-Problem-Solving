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

vector<int> IntersectedMatrix(const vector<vector<int>> &Matrix,const vector<vector<int>> &Matrix1) {

    vector<int> ResultMatrix;

    for (auto& row:Matrix) {
        for (auto& val : row) {
            int number = val;

            for (auto& row2 : Matrix1) {
                for (auto& val2:row2) {
                    if (number == val2) {
                        ResultMatrix.push_back(number);
                    }
                }
            }


        }
    }
    return ResultMatrix;
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
    }; vector<vector<int>> Matrix1 = {
        {1,0,4},
        {0,1,0},
        {2,0,1}
    };


    //FillMatrix(Matrix);
    Print(Matrix);
    Print (IntersectedMatrix(Matrix,Matrix1));







    return 0;
}
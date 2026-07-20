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
    vector<vector<int>> Matrix(Rows, vector<int>(Columns));


FillMatrix(Matrix);
    Print(Matrix);







    return 0;
}
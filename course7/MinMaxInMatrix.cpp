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

vector<int> MinAndMax(const vector<vector<int>> &Matrix) {

    int Min = Matrix[0][0];
    int Max = Matrix[0][0];
    vector<int> result;

    for (const auto& row : Matrix) {
        for (int val : row) {
            if (val > Max) {
                Max = val;
            }
            else if (val < Min) {
                Min = val;
            }
        }
    }
    result.push_back(Max);
    result.push_back(Min);

    return result;
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
        {1,0,4},
        {0,1,0},
        {2,0,1}
    }; vector<vector<int>> Matrix1 = {
        {1,0,4},
        {0,1,0},
        {2,0,1}
    };


    FillMatrix(Matrix);
    Print(Matrix);
    Print(MinAndMax(Matrix));








    return 0;
}
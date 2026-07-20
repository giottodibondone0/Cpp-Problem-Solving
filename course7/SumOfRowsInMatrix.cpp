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

    void CalcRowSum(const vector<vector<int>> &Matrix) {

            int i = 1;
        for (const auto& row:Matrix) {
            int sum = 0;
            for (int val:row) {
                sum = sum + val;
            }
            cout<< i << "-" << sum<< endl;
            i++;
        }
    }

    void PrintMatrix(const vector<vector<int>> &Matrix) {
        for (const auto& row:Matrix) {
            for (int val:row) {
                cout << val << "\t";

            }
            cout << endl;
        }
    }



    int main() {
        srand(static_cast<unsigned>(time(nullptr)));
        vector<vector<int>> Matrix(3, vector<int>(3));

        FillMatrix(Matrix);


        PrintMatrix(Matrix);
        CalcRowSum(Matrix);


        return 0;
    }
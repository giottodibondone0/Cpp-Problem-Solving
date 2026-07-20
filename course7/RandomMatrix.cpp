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



int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int matrix[3][3];

    for ( auto& row : matrix ) {
        for (int& val : row) {

            val = RandomNumber(0,100);

        }
    }

    for (const auto& row : matrix ) {
        for (int val : row) {

            cout << val << "\t";

        }
        cout <<endl;
    }


    return 0;
}
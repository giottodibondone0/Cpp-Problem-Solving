#include <iostream>
#include <vector>
#include <limits>
#include <string>

using namespace std;

int RobotHealth(string message = "enter robot health") {

    int num = {};

    cout << message;

    while (!(cin >> num)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! " << message;
    }
    return num;
}

void simulateRobot (vector<vector<int>>& grid, int *power) {

    for (vector<int>&row : grid) {
        for (int &block : row) {

            *power = ((block & 1) ? (*power + block) : (*power - block));

        }
    }
}



int main() {


    vector<vector<int>> Map = {
    {5 , 3 , 8},
    {9 , 18 , 21},
    {11 , 6 , 17}};


    int robotPower = RobotHealth("Enter initial robot health: ");


    simulateRobot(Map,&robotPower);

    cout << "Final Robot Health: " << robotPower << endl;

    return 0;
}
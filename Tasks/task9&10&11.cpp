#include <array>
#include <iostream>
using namespace std;

void GetMarks(float Marks[]) {
    cout << "Enter your marks : ";
    cin >> Marks[0] >> Marks[1] >> Marks[2];

    while (cin.fail() or Marks[0] <0 or Marks[0] > 100 or Marks[1] <0 or Marks[1] > 100 or Marks[2] <0 or Marks[2] > 100) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "please enter a valid numbers : ";
    cin >> Marks[0] >> Marks[1] >> Marks[2];
    }

}

float CalcSum( const float Marks[]) {
    float sum = Marks[0] + Marks[1] + Marks[2];
    return sum;
}

float CalcAvg ( const float Marks[]) {
    float Avg = (Marks[0] + Marks[1] + Marks[2] ) / 3 ;
    return Avg;
}
void PrintAvgAndSum (float Avg, float SUM) {
    cout << "Your AVG is : " + to_string(Avg) << endl;
    cout << "Your SUM is : " + to_string(SUM)<<endl;
}


int main () {
float Marks[3];
GetMarks(Marks);
    float Sum = CalcSum(Marks);
    float Avg = CalcAvg(Marks);

    PrintAvgAndSum(Avg, Sum);


    return 0;
}
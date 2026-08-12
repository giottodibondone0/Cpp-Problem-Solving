    #include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;




void Fibonacci(int counter) {
    int num1 = 1;
    int num2 = 1;
    int current = 0;

    for (int i = 0 ; i < counter ; i++) {
        current = num1 + num2;
        cout<< "\t" << num1;

        num1 = num2;
        num2 = current;
    }
}




int FibonacciRecursion(int counter, int current = 1) {
    static int num1 = 1;
    static int num2 = 1;

    if (counter == 0) {
        num1 = 1;
        num2 = 1;
        return 0;

    }

    num1 = num2;
    num2 = current;
     cout<< "\t" << num1;



return (FibonacciRecursion(counter-1, num1 + num2));


}

void PrintFibonacciUsingRecurssion(short Number, int Prev1 =0, int
Prev2 =1)
{
    int FebNumber = 0;
    if (Number > 0)
    {
        FebNumber = Prev2 + Prev1;
        Prev2 = Prev1;
        Prev1 = FebNumber;
        cout << FebNumber << " ";
        PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
    }
}




int main() {




    PrintFibonacciUsingRecurssion(10);

    return 0;
}
 #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To){
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void GetArrayValue(int ArrayLength,int arr[]) {

    for (int i =0; i < ArrayLength;i++) {
        arr[i] =RandomNumber(1,100);
    }
}

void SumArrays(const int arr[],const int arr2[], int sum[], int ArrayLength) {
    for (int i = 0; i <ArrayLength;i++) {
        sum[i] = arr[i] + arr2[i];
    }
}

void PrintResult( const int arr[],int ArrayLength,const string& message) {
    cout << message ;
    for (int i = 0 ; i < ArrayLength; i++) {
        cout << arr[i] << " ";
    }
cout <<endl;
}



int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    constexpr int ArrayLength = 10;
    int arr[ArrayLength];
    int arr2[ArrayLength];
    int sum[ArrayLength];


    GetArrayValue(ArrayLength,arr);
    GetArrayValue(ArrayLength,arr2);
    SumArrays(arr,arr2,sum,ArrayLength);
    PrintResult(arr,ArrayLength,"Array 1 : ");
    PrintResult(arr2,ArrayLength,"Array 2 : ");
    PrintResult(sum,ArrayLength,"Array sum : ");





    return 0;
}







//#include <random>
//random_device rd;
//mt19937 gen(rd());

// توليد أرقام صحيحة عملاقة جداً
// uniform_int_distribution<long long> dist(1, 9000000000000);

// توليد أرقام صحيحة صغيرة جداً (مثل المفتاح الذي تناقشنا فيه سابقاً)
// uniform_int_distribution<short> dist(1, 10);

// توليد أرقام عشرية (بها فواصل) من 1.0 إلى 10.0
// uniform_real_distribution<double> dist(1.0, 10.0);

// النتيجة قد تكون: 3.48712 أو 9.11204

// التوزيع الطبيعي (منحنى الجرس - Bell Curve)
// normal_distribution<double> dist(5.0, 2.0);
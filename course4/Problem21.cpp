    #include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;
int GetUserNumber() {
    int Num;
    cout << "Enter a number";
    cin >> Num;
    return  Num;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void RandomSegLoop() {
    for (int i = 1 ; i <= 4; i++) {
        cout <<char (RandomNumber('A','Z'));
    }
}

void KeyGen() {
    for (int i = 1; i <= 4; i++) {
        RandomSegLoop();
        if (i < 4) cout << "-";
    }
}

void GenerateKeys(int KeysAmount) {
    for (int i = 1 ; i <= KeysAmount; i++) {
    KeyGen();
    cout << endl;
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    GenerateKeys(GetUserNumber());

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
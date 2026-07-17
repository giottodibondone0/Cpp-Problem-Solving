#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <iterator>


using namespace std;

// ==========================================
// المهمة الأولى: Function Overloading & Memory
// ==========================================
// 1. اكتب دالة اسمها Swap تقوم بتبديل رقمين باستخدام المراجع (References)
// 2. اكتب دالة أخرى بنفس الاسم Swap تقوم بتبديل رقمين باستخدام المؤشرات (Pointers)

// مكان الحل للمهمة الأولى:
// ...

void Swap(int &a, int &b ) {
    int temp = {};

    temp = a;
    a = b;
    b = temp;
}

void Swap(int *a, int *b ) {
    int temp = {};

    temp = *a;
    *a = *b;
    *b = temp;
}



// ==========================================
// المهمة الثانية: Default Parameters & Validation
// ==========================================
// أكمل الدالة التالية لتقرأ رقماً من المستخدم مع حمايتها من الانهيار إذا أدخل حرفاً.
// اجعل الدالة تقبل متغيراً نصياً (رسالة الطباعة) بحيث تكون قيمته الافتراضية "Enter a number: "
int getValidNumber( string message = "Enter a number:" ) {
    int num;


    while (!(cin >> num)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! " << message;
    }

    return num;
}


// ==========================================
// المهمة الثالثة: Recursion
// ==========================================
// اكتب دالة عودية (Recursive) تستقبل رقماً N، وترجع مجموع الأرقام من 1 إلى N.
// (يجب أن تحتوي على Base Case صحيح لمنع الانهيار في الـ Call Stack).
int recursiveSum(int n) {

    if (n == 1) {
        return 1;
    }

    return (n+recursiveSum(n-1));
}


int main() {
    
    // ==========================================
    // المهمة الرابعة: Vectors & 2D Arrays
    // ==========================================
    // أنشئ متجهاً ثنائي الأبعاد (Vector of Vectors) بحجم 3 صفوف و 3 أعمدة.
    // قم بتعبئته يدوياً بالأرقام من 1 إلى 9 (بأي طريقة تفضلها).
    
    vector<vector<int>> matrix= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    // ==========================================
    // المهمة الخامسة: Ranged Loop, Bitwise & Ternary
    // ==========================================
    // 1. استخدم (Ranged Loop) مزدوج للمرور على المصفوفة التي أنشأتها في المهمة الرابعة.
    // 2. داخل اللوب، استخدم معامل (Bitwise AND) لفحص ما إذا كان الرقم الفردي (رقم & 1).
    // 3. اطبع الرقم باستخدام (Ternary Operator) كالتالي: 
    // إذا كان فردياً، اطبعه كما هو. إذا كان زوجياً، اطبعه مضروباً في 10.
    
    for (vector<int> &row : matrix)  {

        for (int &num : row) {

        cout << ((num & 1) ? num : (num*10)) << " ";

        }
    }


    return 0;
}
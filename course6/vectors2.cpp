
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct stEmployees {
    string FirstName={};
    string LastName={};
    short Salary = {};
};

stEmployees AddEmployee() {
    stEmployees Employee;
    cout << "add an employee "<<endl;

    cout << "First name : ";
    cin >> Employee.FirstName;
    cout << endl;

    cout << "Last name : ";
    cin >> Employee.LastName;
    cout << endl;

    cout << " salary : ";
    cin  >> Employee.Salary;
    cout << endl;

    return Employee ;
}

void AddToVector( vector<stEmployees>& Employees) {
    bool AddAnotherNumber= {};

    do {
        Employees.push_back(AddEmployee());

        cout << "do you want to add another number ? ( 1 / 0 ) ";
        cin >> AddAnotherNumber;
    } while (AddAnotherNumber);
}

void PrintEmployees(const vector<stEmployees>& Employees) {
    for (const stEmployees& i :Employees) {
        cout <<i.FirstName<<endl;
        cout <<i.LastName<<endl;
        cout <<i.Salary<<endl;
        cout << endl;
    }
}





int main() {
    vector<stEmployees> Employees;

    AddToVector(Employees);
    PrintEmployees(Employees);


    return 0;
}


#include <iostream>
using namespace std;
int main() {

        string name;
        short age;
        string city;
        string country;
        float MonthlySalary;
        char Gender;
        bool isMarried;

      cout<<"enter your name";
      getline(cin, name);

      cout<<"enter your age";
      cin>>age;
        cin.ignore();

      cout<<"enter your city";
      getline(cin, city);

      cout<< "enter your country";
      getline(cin, country);

      cout<<"enter your monthly salary";
      cin>>MonthlySalary;
    cin.ignore();

      cout<<"enter your gender (M/F)";
      cin>>Gender;
  cin.ignore();

      cout<<"are you married? (1 for yes, 0 for no)";
      cin>>isMarried;
    cin.ignore();

        cout << "your name is : "<<name<<endl;
        cout << "your age is : "<<age<<endl;
        cout << "your city is : "<<city<<endl;
        cout << "your country is : "<<country<<endl;
        cout << "your monthly salary is : "<<MonthlySalary<<endl;
        cout << "your yearly salary is : "<<MonthlySalary*12<<endl;
        cout << "your gender is : "<<Gender<<endl;
        cout << "married?  : "<<isMarried<<endl;
    return 0;
}

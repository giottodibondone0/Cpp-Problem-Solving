 #include <iostream>

using namespace std;

struct stDriverInfo {
    int Age = {};
    bool License{};
    bool KnowsSomeone{};

};

bool KnowsSomeone() {
    int KnowsSomeone;

    cout << "Do you know someone?(1 for yes / 0 for no) ";

    cin>>KnowsSomeone;


    while (cin.fail() || KnowsSomeone != 0 and KnowsSomeone != 1) {

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "Invalid input! Please enter 0 or 1: ";
        cin >> KnowsSomeone;
    }
    return KnowsSomeone;
}
int ReadAge() {
int Age;

    cout << "How old are you ? ";

    cin>>Age;


    while (cin.fail() || Age <= 0 || Age >= 100) {

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "Invalid input! Please enter a valid numerical age: ";
        cin >> Age;
    }
return Age;

}
bool ReadLicense() {

    int HasLicense;
    cout << "Do you have a license( 1 for yes / 0 for no ) ? ; " << endl;
    cin>> HasLicense;


    while ( cin.fail() || HasLicense != 0 and HasLicense != 1 ) {

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "Please enter 0 or 1 : ";
        cin >> HasLicense;
    }

    return (HasLicense == 1);
}
bool CheckIfCanDrive (stDriverInfo DriverInfo) {
    if (DriverInfo.KnowsSomeone) {
        return true;
    }
    return (DriverInfo.Age >=18 and DriverInfo.License);
}



stDriverInfo ReadDriverInfo () {

    stDriverInfo DriverInfo;
    DriverInfo.Age = ReadAge();
    DriverInfo.License = ReadLicense();
    DriverInfo.KnowsSomeone = KnowsSomeone();

    return DriverInfo;
}

void PrintResult(stDriverInfo DriverInfo) {
    if (CheckIfCanDrive(DriverInfo)) {
        cout << "You can ride "<< endl;
    }
    else {
        cout << "You Can't Drive";
    }
}


int main() {


PrintResult(ReadDriverInfo());

    return 0;
}
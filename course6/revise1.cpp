#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <iterator>


using namespace std;


struct stSurvivor {
    string Name = {};
    int Health = {};
    string FavWeapon = {};
};

void GetSurvivors(vector<stSurvivor> &survivors,int survivorsCount) {

        for (int i = 0;i<survivorsCount;i++) {
            stSurvivor tempSurvivor;
            cout<<endl << "enter survivor name : "; cin >> tempSurvivor.Name;
            cout<<endl << "enter survivor health : "; cin >> tempSurvivor.Health;
            cout<<endl << "enter survivors fav weapon : "; cin >> tempSurvivor.FavWeapon;
            survivors.push_back(tempSurvivor);
        }
}
void ShowSurvivorsInfo(const vector<stSurvivor> &survivors) {
    for (int i = 0;i<survivors.size();i++) {
        cout<<endl  << i+1 << "-"<<"survivor name : " << survivors[i].Name;
        cout<<endl  << i+1 << "-"<<"survivor health : " << survivors[i].Health;;
        cout<<endl  << i+1 << "-"<<"survivor gun : " << survivors[i].FavWeapon;;


    }
}

void ZombieAttack(vector<stSurvivor>& survivors,const string& targetName) {

    auto it = survivors.begin();

    while (it != survivors.end()) {
        if (it->Name == targetName) {
            it->Health -= 50;
            if (it->Health<=0) {
                it = survivors.erase(it);
            }
            else {
                ++it;
            }
        }
        else {
            ++it;
        }

    }
}

void LoadCampState(vector<stSurvivor>& survivors) {

    fstream MyFile;
    MyFile.open("camp_log.txt", ios::in);

    if (MyFile.is_open()) {
        stSurvivor temp;
        while (MyFile >> temp.Name >> temp.Health >> temp.FavWeapon) {

            survivors.push_back(temp);
        }

        MyFile.close();
    }

}

void SaveCampState(const vector<stSurvivor>& survivors) {
    fstream MyFile;
    MyFile.open("camp_log.txt", ios::out);

    if (MyFile.is_open()) {
        for (const auto& element : survivors) {
            MyFile << element.Name << " " << element.Health << " " << element.FavWeapon << endl;

        }

        MyFile.close();
    }
}

int main() {
    int survivorsCount;
    vector<stSurvivor> survivors;
    LoadCampState(survivors);

    cout << "enter survivors count : "; cin >> survivorsCount;


    GetSurvivors(survivors, survivorsCount);

    ZombieAttack(survivors,"Ali");

    ShowSurvivorsInfo(survivors);


    SaveCampState(survivors);
    return 0;
}
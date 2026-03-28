#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Hero {
enum WeaponType{Sword = 1, Bow = 2, Staff = 3};
    string Name ={};
    int Level={};
    double Health={};
    WeaponType FavWeapon = {};
};

void CreateHero(Hero Party[3], int count )  {

    for (int i = 0; i < count; i ++) {
    cout << "Choose your "<< i + 1 << " Hero's name ! : ";
    getline(cin, Party[i].Name);

    cout << "Choose your "<< i + 1 << "Hero's level ! : ";
    cin >> Party[i].Level;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Choose your "<< i + 1 << "Hero's Health ! : ";
    cin >> Party[i].Health;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Choose your "<< i + 1 << "Hero's Weapon ! : " << endl
        << "1 for sword "<< endl
        << "2 for Bow" << endl
        << "3 for staff"<< endl;
    int W;
    cin >> W;

    Party[i].FavWeapon = static_cast<Hero::WeaponType>(W);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " *************************************" << endl;
    }

}
int AttackLevel (const Hero &h, Hero::WeaponType weapon) {

    int Attack = h.Level * 10 + weapon * 5;
    return Attack;
}

void LevelUp(Hero &LevelAndHealth) {
    cout << "Leveling Up !"<< endl;
    LevelAndHealth.Health = LevelAndHealth.Health + (.10*LevelAndHealth.Health);
    LevelAndHealth.Level = LevelAndHealth.Level + 1;

}

void GetData(Hero &HeroData ) {
    cout << "Enter your hero's Name : "<< endl;
    getline(cin, HeroData.Name);

    cout << "Enter your hero's level : "<< endl;
    cin >> HeroData.Level;
    cin.ignore();

    cout << "Enter your hero's Health : "<< endl;
    cin >> HeroData.Health;
    cin.ignore();

    cout << "Choose your hero's Fav Weapon (1 = Sword, 2 = Bow, 3 = Staff ): "<< endl;
    int c;
    cin >> c;
    cin.ignore();
    HeroData.FavWeapon = (Hero::WeaponType)c;


}

void DisplayHero(const Hero &HeroData) {

    cout <<"Your name is : "<< HeroData.Name<< endl;
    cout << " Your level is : "<< HeroData.Level<< endl;
    cout <<"Your health is : " << HeroData.Health<< endl;
    cout << "Your weapon is : " << HeroData.FavWeapon<< endl;
}

void EquipWeapon(Hero &h, Hero::WeaponType NewWeapon) {

    h.FavWeapon = NewWeapon;
}

int main() {

Hero MyParty[3];
struct monster {
    string Name = {};
    int Health = {};
    int Attack = {};
};
CreateHero(MyParty,3);
    return 0;
}
    //
    // GetData(MyParty[0]);
    // DisplayHero(MyParty[0]);
    //
    // EquipWeapon(MyParty[0], Hero::Bow);
    //
    // GetData(MyParty[1]);
    // DisplayHero(MyParty[1]);
    //
    // LevelUp(MyParty[1]);
    //
    // cout << "Your Heros after updating : "<< endl;
    // DisplayHero(MyParty[0]);
    // cout <<"Your current attack level is : "<< AttackLevel(MyParty[0], MyParty[0].FavWeapon) << endl;
    // DisplayHero(MyParty[1]);
    // cout <<"Your current attack level is : "<< AttackLevel(MyParty[1], MyParty[1].FavWeapon) << endl;

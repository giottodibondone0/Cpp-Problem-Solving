
#include <iostream>
#include <string>

using namespace std;

enum enHeroClass {Warrior,Mage,Rogue};
enum enEnemyType {Goblin,Orc,Boss};

struct stStats {
    short HP ={};
    short Attack ={};
    short Defense ={};
};
struct stCharacter {
    string Name;
    enHeroClass HeroClass= {};
    enEnemyType EnemyType ={};
    stStats Stats;
    bool isAlive = true;

};




constexpr stStats DefaultHeroStats[3] {
    {100, 15, 10},
    {60, 25, 5},
    {80, 18, 8}
};

const string HeroClassNames[3] = {
    "Warrior", "Mage", "Rogue"
};




constexpr stStats DefaultEnemyStats[3] {
    {40, 8, 2},
    {80, 18, 5},
    {150, 30, 12}
};

const string EnemyTypeNames[3] = {
    "Goblin", "Orc", "Boss"
};



stCharacter MakeYourCharacter() {
    stCharacter Character;
    cout << "Enter your character name : ";
    cin >> Character.Name;
    cout<< endl << "Choose the class :";
    cout<<endl << "1 for Warrior";
    cout<<endl << "2 for Mage";
    cout<<endl << "3 for Rogue";

    short HeroClassNumber;
    cin >> HeroClassNumber;

    Character.HeroClass = static_cast<enHeroClass>(HeroClassNumber - 1);
    Character.Stats = DefaultHeroStats[Character.HeroClass];


    return Character;
}

void PrintCharacterInfo(const stCharacter& C) {
    cout << "\n=== Character Info ===\n";
    cout << "Name    : " << C.Name << endl;

    cout << "Class   : " << HeroClassNames[C.HeroClass] << endl;

    cout << "HP      : " << C.Stats.HP << endl;
    cout << "Attack  : " << C.Stats.Attack << endl;
    cout << "Defense : " << C.Stats.Defense << endl;
    cout << "Status  : " << (C.isAlive ? "Alive" : "Dead") << endl;
    cout << "======================\n";
}

void GenerateEnemies(stCharacter Enemies[3]) {

    Enemies[0].Name = "Sneaky Goblin";
    Enemies[0].EnemyType = Goblin;
    Enemies[0].Stats = DefaultEnemyStats[Goblin];


    Enemies[1].Name = "Brutal Orc";
    Enemies[1].EnemyType = Orc;
    Enemies[1].Stats = DefaultEnemyStats[Orc];


    Enemies[2].Name = "The Demon King";
    Enemies[2].EnemyType = Boss;
    Enemies[2].Stats = DefaultEnemyStats[Boss];
}

void HealPlayer( stCharacter& MyCharacatar) {

    MyCharacatar.Stats.HP = MyCharacatar.Stats.HP + 25;
    if (MyCharacatar.Stats.HP >DefaultHeroStats[MyCharacatar.HeroClass].HP) {
        MyCharacatar.Stats.HP = DefaultHeroStats[MyCharacatar.HeroClass].HP;
    }
    cout << "\n Your Health is : " << MyCharacatar.Stats.HP <<endl;

}




int main() {
    stCharacter MyHero = MakeYourCharacter();
    PrintCharacterInfo(MyHero);

    stCharacter ArenaEnemies[3];
    GenerateEnemies(ArenaEnemies);

    cout << "\n========== THE ARENA BEGINS ==========\n";

    for (short i = 0; i < 3; i++) {
        cout << "\n>> A wild " << ArenaEnemies[i].Name << " appears! <<\n";

        while (MyHero.isAlive && ArenaEnemies[i].isAlive) {
            cout << "Your Health is : " << MyHero.Stats.HP;

            cout << "\n 1-Heal \n 2-Attack";
            short PlayerChoice = {};

            cin >> PlayerChoice;
            if (PlayerChoice == 1 ) {
                HealPlayer(MyHero);

            }
            else if (PlayerChoice == 2) {
                short PlayerDamage = MyHero.Stats.Attack - ArenaEnemies[i].Stats.Defense;
                if (PlayerDamage < 0) PlayerDamage = 0;


                cout << "\n" << MyHero.Name << " attacked for " << PlayerDamage << " damage!\n";
                ArenaEnemies[i].Stats.HP = ArenaEnemies[i].Stats.HP - PlayerDamage;
            }


                if (ArenaEnemies[i].Stats.HP <= 0) {
                    ArenaEnemies[i].isAlive = false;
                    cout << ">> " << ArenaEnemies[i].Name << " has been defeated! <<\n";
                }


                if (ArenaEnemies[i].isAlive) {
                    short EnemyAttack = ArenaEnemies[i].Stats.Attack - MyHero.Stats.Defense;
                    if (EnemyAttack < 0) EnemyAttack = 0;

                    cout << ArenaEnemies[i].Name << " attacked back for " << EnemyAttack << " damage!\n";
                    MyHero.Stats.HP = MyHero.Stats.HP - EnemyAttack;

                    if (MyHero.Stats.HP <= 0) {
                        MyHero.isAlive = false;
                    }

                }


        }

        if (!MyHero.isAlive) {
            cout << "\n You have been defeated by " << ArenaEnemies[i].Name << ". Game Over.\n";
            break;
        } else {
            cout << "\n You defeated the " << ArenaEnemies[i].Name << "!\n";
            cout << "----------------------------------------\n";
        }


    }

    if (MyHero.isAlive) {
        cout << "\n Congratulations " << MyHero.Name << "! You have cleared the Arena! \n";
    }

    return 0;
}

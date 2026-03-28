#include <iostream>
using namespace std;



struct player {

    short health {};
    short sheild {};
    enum state{attack, defense, smart, magic};
    enum type{archer, knight, wizard, warrior};
    enum tool{sword, bow, wand};
    state state ={};
    type type = {};
    tool tool = {};
};

int main () {

player player1;
    player1.health = 100;
    player1.sheild = 100;
    player1.state = player::attack;
    player1.type = player::knight;
    player1.tool = player::sword;

return 0;
};
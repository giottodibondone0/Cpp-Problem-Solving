#include <iostream>
using namespace std;

enum place {east, west, south, north};

struct DietPlan {
    enum  morph {ectomorph, normal, fat, thin  };
    short TotalCalories;
    short carb;
    short fats;
    short protein;
    morph body;
    place place;
};
struct PowerLifter {
    string name;
    short Weight = 0;
    short Height = 0;
};

struct player {
    DietPlan CurrentDiet{};
    PowerLifter info;
};



int main () {

player player1;
    player1.CurrentDiet.body = DietPlan::thin;
    player1.CurrentDiet.TotalCalories = 3200;
    player1.CurrentDiet.carb = 450;
    player1.CurrentDiet.protein = 130;
    player1.CurrentDiet.fats = 100;
    player1.info.name = "Ahmed Ahmed";
    player1.info.Height = 183;
    player1.info.Weight = 75;
    player1.CurrentDiet.place = {east};

    return 0;
}
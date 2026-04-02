
#include <iostream>
#include <string>

using namespace std;

enum enCategory {HotDrink, Dessert, ColdDrink};
struct stItem {
    string Name = {};
    float price = {};
    enCategory Category;
};

void LoadMenuData (stItem arMenu[]) {

    float CoffeePrice = 10;
    float HotChocolatePrice = 15;
    float SodaPrice = 15;
    float MoltenCakePrice = 30;
    float CheeseCakePrice = 25;
    arMenu[0].Category = enCategory::HotDrink;
    arMenu[0].Name = "Coffee";
    arMenu[0].price = CoffeePrice;

    arMenu[1].Category = enCategory::HotDrink;
    arMenu[1].Name = "Hot Chocolate";
    arMenu[1].price = HotChocolatePrice;

    arMenu[2].Category = enCategory::ColdDrink;
    arMenu[2].Name = "Soda";
    arMenu[2].price = SodaPrice;

    arMenu[3].Category = enCategory::Dessert;
    arMenu[3].Name = "Molten Cake";
    arMenu[3].price = MoltenCakePrice;

    arMenu[4].Category = enCategory::Dessert;
    arMenu[4].Name = "Cheese Cake";
    arMenu[4].price = CheeseCakePrice;

}




void ShowMenu (stItem arMenu[], int menuLength) {
    cout << "============= CAFE MENU =============" << endl;

    for (int i =0; i < menuLength; i++) {
        cout << i + 1 << ". " << arMenu[i].Name << " \t " << arMenu[i].price << "$" << endl;

    }
    cout << "=====================================" << endl;
}




int main() {
constexpr short MAX_ITEMS = 50;
short ItemsCount  = 0;

const int ItemsNumber = 5;
stItem Menu[ItemsNumber];

stItem CustomerOrder[MAX_ITEMS];

    LoadMenuData(Menu);
    ShowMenu(Menu, ItemsNumber);

        int choice;

    do {
    cout << "Enter the num of your order then press 0 to get the receipt : ";
    cin >> choice;
        while (choice > 5 or choice < 0)  {
            cout << "please enter a valid number" << endl;
            cin >> choice;
        }

        if (choice != 0) {
            CustomerOrder[ItemsCount] = Menu [choice - 1];
            ItemsCount ++;
            cout << "Item added to your order!\n";
        }

    } while (choice != 0 );

    float TotalPrice = 0;

        cout << "Your have ordered : " << endl;
    for (int i = 0; i < ItemsCount; i++) {
        cout << i + 1 <<". " <<  CustomerOrder[i].Name <<  " \t " << CustomerOrder[i].price << "$" << endl;
        TotalPrice = TotalPrice + CustomerOrder[i].price;
    }
        cout << " Total Price = " << TotalPrice << endl;
    return 0;
}

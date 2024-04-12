#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];
    int num_Items = 0;
    inventory[num_Items++] = "sword";
    inventory[num_Items++] = "armor";
    inventory[num_Items++] = "shield";
    cout << "Your items:\n";
    for (int i = 0; i < num_Items; i++) {
        cout << inventory[i] << endl;
    }
    cout << "\nYou trade your sword for a battle axe";
    inventory[0] = "battle axe";
    cout << "\nYpur items:\n";
    for (int i = 0; i < num_Items; i++) {
        cout << inventory[i] << endl;
    }
    cout << "\nThe item name " << inventory[0] << " has";
    cout << inventory[0].size() << " letters in it.\n";
    cout << "\nYou find a healing potion.";
    if (num_Items < MAX_ITEMS) {
        inventory[num_Items++] = "healing potion";
    } else {
        cout << "You have too many items and cant carry another.";
    }
    cout << "\nYou items: \n";
    for (int i = 0; i < num_Items; ++i) {
        cout << inventory[i] << endl;
    }
    return 0;
}
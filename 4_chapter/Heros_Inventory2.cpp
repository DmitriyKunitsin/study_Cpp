#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    std::cout << "You have " << inventory.size() << "  items. \n";

    for (int i = 0; i < inventory.size(); ++i) {
        std::cout << inventory[i] << std::endl;
    }

    std::cout <<"\nYou trade your sword for а battle ахе." << std::endl;
    inventory[0] = "battle axe";
    std::cout << "\nYou items" << std::endl;

    for (int i = 0; i < inventory.size(); ++i) {
        std::cout << inventory[i] << std::endl;
    }

    std::cout << "\nThe item name " << inventory[0]<< " has" << std::endl;
    std::cout << inventory[0].size() << " letters in it. \n" << std::endl;
    std::cout << "\nYou shield is destroyed in a fierce battle." << std::endl;
    inventory.pop_back();
    std::cout << "\n You items:\n" << std::endl;
    for(int i = 0; i < inventory.size(); ++i) {
        std::cout << inventory[i] << std::endl;
    }
    std::cout << "\nYou were tobbed of all of your possessions by a thief." << std::endl;
    inventory.clear();
    if(inventory.empty()) {
        std::cout << "\n You have nothing.\n" << std::endl;
    } else {
        std::cout << "\n You have at least one item. \n" << std::endl;
    }
    return 0;
}
#include "inventory.h"
#include <iostream>

int main() {
    Inventory myInventory;
    
    myInventory.addItem("Sword", 50, 15);
    myInventory.addItem("Shield", 40, 20);
    myInventory.addItem("Potion", 10, 2);
    
    std::cout << "Current inventory:\n";
    myInventory.display();
    
    std::cout << "\nRemoving last item...\n";
    myInventory.removeItem();
    myInventory.display();
    
    std::cout << "\nCurrent quantity: " << myInventory.getCurrentQuantity() << "\n";
    std::cout << "Current weight: " << myInventory.getCurrentWeight() << "/100\n";
    
    return 0;
}
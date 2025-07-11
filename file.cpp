#include "inventory.h"
#include <iostream>

Item::Item(std::string name, int ct, int wt) 
    : name(name), cost(ct), weight(wt) {}

Inventory::Inventory() 
    : quantity(0), capacity(10), currentWeight(0), maxWeight(100) {}

void Inventory::addItem(const std::string& name, int cost, int weight) {
    if (quantity >= capacity || (currentWeight + weight) > maxWeight) {
        std::cout << "Cannot add item: Inventory full!" << std::endl;
        return;
    }
    items.emplace_back(name, cost, weight);
    quantity++;
    currentWeight += weight;
}

void Inventory::removeItem() {
    if (items.empty()) {
        std::cout << "Inventory is already empty!" << std::endl;
        return;
    }
    currentWeight -= items.back().weight;
    items.pop_back();
    quantity--;
}

void Inventory::display() const {
    if (items.empty()) {
        std::cout << "Inventory is empty." << std::endl;
        return;
    }
    for (size_t i = 0; i < items.size(); i++) {
        std::cout << i + 1 << ". " << items[i].name 
                  << " (Cost: " << items[i].cost 
                  << ", Weight: " << items[i].weight << ")\n";
    }
}

int Inventory::getCurrentQuantity() const {
    return quantity;
}

int Inventory::getCurrentWeight() const {
    return currentWeight;
}
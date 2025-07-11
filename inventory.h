#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>

struct Item {
    std::string name;
    int cost;
    int weight;
    Item(std::string name, int ct, int wt);
};

class Inventory {
private:
    std::vector<Item> items;
    int quantity;
    const int capacity;
    int currentWeight;
    const int maxWeight;

public:
    Inventory();
    void addItem(const std::string& name, int cost, int weight);
    void removeItem();
    void display() const;
    int getCurrentQuantity() const;
    int getCurrentWeight() const;
};

#endif // INVENTORY_H
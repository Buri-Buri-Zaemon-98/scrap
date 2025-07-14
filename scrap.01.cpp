#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
class Inventory;
struct item{
    int cost;
    int weight;
    std::string name;
    item(int cost, int weight, std::string name) : cost(cost), weight(weight), name(name){}
};
class Inventory{
    private:
    std::vector<Item> items;
    int quantity=0;
    const total_capacity=120;
    int weigt=0;
    const int wght=1220;
    public:
    void additem(const std::string& name, int cost, int weight){
        if (quantity==total_capacity || quantity >total_capacity || (weight+weigt)>wght){
            std::cout<<"INVENTORY OVERLOAD"<<std::endl;
        }
        else{
            items.push_back({cost, weight, name});
        }
    }
    void removeitem(const std::string& name){
        if (items.size()==0){
            std::cout<<"Sorry Inventory itself is empty"<<std::endl;
        }
        else{
            for (size_t i=0; i<items.size(),i++){
                if (items[i].name==name){
                    items.pop_back();
                }
                else{
                    std::cout<<"Requested Item not found"<<std::endl;
                }
            }
        }
    }
    void displayitem(){
        int qt=0;
        while(qt!=items.size()){
            std::cout<<i+1<<items[i].name<<std::endl;
            qt++;
        }
        std::cout<<"Items are Displayed"<<std::endl;
    }
};    
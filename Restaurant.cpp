#include "Restaurant.h"
#include <iostream>

Restaurant::Restaurant(const std::string& restName) : name(restName) {}

void Restaurant::addMenuItem(const Food& food) {
    menu.push_back(food);
}

void Restaurant::displayMenu() const {
    std::cout << "Menu for " << name << ":\n";
    for (const auto& item : menu) {
        item.displayInfo();
        std::cout << "------------------\n";
    }
}

std::string Restaurant::getName() const {
    return name;
}

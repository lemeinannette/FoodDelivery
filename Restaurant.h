#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <vector>
#include "Food.h"

class Restaurant {
private:
    std::string name;
    std::vector<Food> menu;

public:
    Restaurant(const std::string& restName);

    void addMenuItem(const Food& food);
    void displayMenu() const;
    std::string getName() const;
};

#endif

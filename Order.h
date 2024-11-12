#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Food.h"

class Order {
private:
    std::vector<Food> items;  // List of food items in the order
    double totalPrice;

public:
    Order();

    void addFoodItem(const Food& food);
    double calculateTotalPrice();  // Sum up the prices of all items

    void displayOrder() const;
};

#endif

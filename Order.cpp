#include "Order.h"
#include <iostream>

Order::Order() : totalPrice(0.0) {}

void Order::addFoodItem(const Food& food) {
    items.push_back(food);
    totalPrice += food.calculateTotalPrice();
}

double Order::calculateTotalPrice() {
    return totalPrice;
}

void Order::displayOrder() const {
    std::cout << "Order Details:\n";
    for (const auto& item : items) {
        item.displayInfo();
        std::cout << "------------------\n";
    }
    std::cout << "Total Order Price: $" << totalPrice << std::endl;
}

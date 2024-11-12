#include "FoodOrder.h"
#include <iostream>

FoodOrder::FoodOrder(const Restaurant& rest, const Customer& cust)
    : restaurant(rest), customer(cust) {}

void FoodOrder::addFoodToOrder(const Food& food) {
    order.push_back(food);
}

void FoodOrder::finalizeOrder() {
    std::cout << "Order finalized for customer: " << customer.getUsername() << "\n";
    std::cout << "From restaurant: " << restaurant.getName() << "\n";
}

void FoodOrder::displayOrderDetails() const {
    customer.displayInfo();
    restaurant.displayMenu();
    for (const auto& item : order) {
        item.displayInfo();
    }
}

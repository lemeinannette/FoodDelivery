// FoodOrder.cpp

#include "FoodOrder.h"
#include <iostream>

FoodOrder::FoodOrder(const Restaurant& rest, const Customer& cust, const DeliveryPerson& delivery)
    : restaurant(rest), customer(cust), deliveryPerson(delivery) {}

void FoodOrder::addFoodToOrder(const Food& food) {
    order.push_back(food);
}

void FoodOrder::finalizeOrder() {
    std::cout << "Order finalized for customer: " << customer.getUsername() << "\n";
    std::cout << "From restaurant: " << restaurant.getName() << "\n";
    deliveryPerson.displayInfo();  // Show the delivery person's info
}

void FoodOrder::displayOrderDetails() const {
    customer.displayInfo();
    restaurant.displayMenu();
    for (const auto& item : order) {
        item.displayInfo();
    }

    double total = calculateTotalPrice();
    std::cout << "Total Price: $" << total << "\n";
}

double FoodOrder::calculateTotalPrice() const {
    double total = 0;
    for (const auto& item : order) {
        total += item.getPrice();
    }
    return total;
}

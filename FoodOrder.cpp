// FoodOrder.cpp

#include "FoodOrder.h"
#include <iostream>

// Constructor
FoodOrder::FoodOrder(const Restaurant& rest, const Customer& cust)
    : restaurant(rest), customer(cust) {}

// Add food item to the order
void FoodOrder::addFoodToOrder(const Food& food) {
    order.push_back(food);
}

// Calculate total price of the order
double FoodOrder::calculateTotalPrice() const {
    double total = 0.0;
    for (const auto& foodItem : order) {
        total += foodItem.calculateTotalPrice(); // Assuming Food has this method to calculate total price
    }
    return total;
}

// Finalize the order
void FoodOrder::finalizeOrder() {
    std::cout << "Order finalized for customer: " << customer.getUsername() << "\n";
    std::cout << "From restaurant: " << restaurant.getName() << "\n";
    std::cout << "Total order price: $" << calculateTotalPrice() << std::endl; // Display total price
}

// Display order details
void FoodOrder::displayOrderDetails() const {
    customer.displayInfo();
    restaurant.displayMenu();
    for (const auto& item : order) {
        item.displayInfo();
    }
}

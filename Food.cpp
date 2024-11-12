#include "Food.h"
#include <iostream>

// Constructor
Food::Food(const std::string& foodName, double foodPrice, int qty)
    : name(foodName), price(foodPrice), quantity(qty) {}

// Getters
std::string Food::getName() const { return name; }
double Food::getPrice() const { return price; }
int Food::getQuantity() const { return quantity; }

// Setters
void Food::setQuantity(int qty) { quantity = qty; }

// Display information about the food item
void Food::displayInfo() const {
    std::cout << "Food Item: " << name << "\nPrice: $" << price << "\nQuantity: " << quantity << std::endl;
}

// Calculate total price for the food item (price * quantity)
double Food::calculateTotalPrice() const {
    return price * quantity;
}

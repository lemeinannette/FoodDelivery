#include "Food.h"
#include <iostream>

Food::Food(const std::string& foodName, double foodPrice, int qty)
    : name(foodName), price(foodPrice), quantity(qty) {}

std::string Food::getName() const { return name; }
double Food::getPrice() const { return price; }
int Food::getQuantity() const { return quantity; }

void Food::setQuantity(int qty) { quantity = qty; }

double Food::calculateTotalPrice() const {
    return price * quantity;
}

void Food::displayInfo() const {
    std::cout << "Food Item: " << name << "\nPrice: $" << price << "\nQuantity: " << quantity << std::endl;
}

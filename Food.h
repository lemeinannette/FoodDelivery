#ifndef FOOD_H
#define FOOD_H

#include <string>

class Food {
private:
    std::string name;
    double price;
    int quantity;

public:
    Food(const std::string& foodName, double foodPrice, int qty);

    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;

    void setQuantity(int qty);
    double calculateTotalPrice() const;  // Returns total price for the item quantity
    void displayInfo() const;  // Display food details
};

#endif

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"
#include "Food.h"
#include <vector>

class Customer : public User {
private:
    std::string deliveryAddress;
    std::vector<Food> order;  // List of food items

public:
    Customer(const std::string& uname, const std::string& pwd, const std::string& address);

    // Add food item to the order
    void addFoodToOrder(const Food& food);

    // Display order information
    void displayOrder() const;

    void displayInfo() const override;  // Override displayInfo function
};

#endif

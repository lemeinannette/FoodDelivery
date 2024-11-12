#ifndef FOODORDER_H
#define FOODORDER_H

#include "Restaurant.h"
#include "Customer.h"
#include "Food.h"
#include <vector>

class FoodOrder {
private:
    Restaurant restaurant;
    Customer customer;
    std::vector<Food> order;  // List of ordered food items

public:
    FoodOrder(const Restaurant& rest, const Customer& cust);

    void addFoodToOrder(const Food& food);
    void finalizeOrder();
    void displayOrderDetails() const;
};

#endif

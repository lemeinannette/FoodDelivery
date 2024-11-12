// FoodOrder.h

#ifndef FOODORDER_H
#define FOODORDER_H

#include "Restaurant.h"
#include "Customer.h"
#include "Food.h"
#include "DeliveryPerson.h"
#include <vector>

class FoodOrder {
private:
    Restaurant restaurant;
    Customer customer;
    std::vector<Food> order;  // List of ordered food items
    DeliveryPerson deliveryPerson;  // Delivery person assigned to the order

public:
    FoodOrder(const Restaurant& rest, const Customer& cust, const DeliveryPerson& delivery);

    void addFoodToOrder(const Food& food);
    void finalizeOrder();
    void displayOrderDetails() const;
    double calculateTotalPrice() const;  // Calculate the total price of the order
};

#endif

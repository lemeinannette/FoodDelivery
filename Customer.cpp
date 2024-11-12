#include "Customer.h"
#include <iostream>

Customer::Customer(const std::string& uname, const std::string& pwd, const std::string& address)
    : User(uname, pwd), deliveryAddress(address) {}

void Customer::displayInfo() const {
    User::displayInfo();
    std::cout << "Delivery Address: " << deliveryAddress << std::endl;
}

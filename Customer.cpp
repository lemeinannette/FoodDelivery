// Customer.cpp

#include "Customer.h"
#include <iostream>

Customer::Customer(const std::string& userName, const std::string& password, 
                   const std::string& addr, const std::string& phone)
    : User(userName, password), address(addr), phoneNumber(phone) {}

void Customer::displayInfo() const {
    std::cout << "Customer Info:\n";
    std::cout << "Username: " << getUsername() << "\n";
    std::cout << "Address: " << address << "\n";
    std::cout << "Phone Number: " << phoneNumber << "\n";  // Display phone number
}

std::string Customer::getPhoneNumber() const {
    return phoneNumber;
}

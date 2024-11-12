// DeliveryPerson.cpp
#include "DeliveryPerson.h"
#include <iostream>

// Constructor definition
DeliveryPerson::DeliveryPerson(const std::string& username, const std::string& password, const std::string& vehicleType)
    : User(username, password), vehicleType(vehicleType) {}

// Destructor definition
DeliveryPerson::~DeliveryPerson() {
    // Optional: cleanup code
    std::cout << "DeliveryPerson object destroyed." << std::endl;
}

// Display info method
void DeliveryPerson::displayInfo() const {
    User::displayInfo();  // Assuming User class has displayInfo method
    std::cout << "Vehicle Type: " << vehicleType << std::endl;
}

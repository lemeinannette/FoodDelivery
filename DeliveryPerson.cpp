#include "DeliveryPerson.h"
#include <iostream>

DeliveryPerson::DeliveryPerson(const std::string& uname, const std::string& pwd, const std::string& vehicle)
    : User(uname, pwd), vehicleType(vehicle) {}

void DeliveryPerson::displayInfo() const {
    User::displayInfo();
    std::cout << "Vehicle Type: " << vehicleType << std::endl;
}

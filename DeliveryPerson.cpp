// DeliveryPerson.cpp

#include "DeliveryPerson.h"
#include <iostream>

DeliveryPerson::DeliveryPerson(const std::string& name, const std::string& phone, const std::string& vehicle)
    : name(name), phoneNumber(phone), vehicle(vehicle) {}

void DeliveryPerson::displayInfo() const {
    std::cout << "Delivery Person Info:\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Phone: " << phoneNumber << "\n";
    std::cout << "Vehicle: " << vehicle << "\n";
}

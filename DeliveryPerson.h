// DeliveryPerson.h
#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H

#include "User.h"  // Assuming DeliveryPerson inherits from User
#include <string>

class DeliveryPerson : public User {
private:
    std::string vehicleType;

public:
    DeliveryPerson(const std::string& username, const std::string& password, const std::string& vehicleType);
    ~DeliveryPerson();  // Destructor

    void displayInfo() const;  // Method to display info
};

#endif

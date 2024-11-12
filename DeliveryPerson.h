#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H

#include "User.h"

class DeliveryPerson : public User {
private:
    std::string vehicleType;

public:
    DeliveryPerson(const std::string& uname, const std::string& pwd, const std::string& vehicle);
    void displayInfo() const override;  // Override displayInfo function
};

#endif

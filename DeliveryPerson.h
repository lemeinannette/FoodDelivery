// DeliveryPerson.h

#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H

#include <string>

class DeliveryPerson {
private:
    std::string name;
    std::string phoneNumber;
    std::string vehicle;

public:
    // Constructor
    DeliveryPerson(const std::string& name, const std::string& phone, const std::string& vehicle);

    void displayInfo() const;  // Display delivery person details
};

#endif

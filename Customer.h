// Customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "User.h"

class Customer : public User {
private:
    std::string address;
    std::string phoneNumber;  // New field for phone number

public:
    Customer(const std::string& userName, const std::string& password, 
             const std::string& addr, const std::string& phone);

    void displayInfo() const override;
    std::string getPhoneNumber() const;  // Getter for phone number
};

#endif

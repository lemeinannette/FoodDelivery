#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string username;
    std::string password;

public:
    User(const std::string& uname, const std::string& pwd);

    // Getter for username
    std::string getUsername() const;

    virtual void displayInfo() const;  // Virtual function for polymorphism
};

#endif

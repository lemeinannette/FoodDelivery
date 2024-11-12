#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string username;
    std::string password;

public:
    // Constructor
    User(const std::string& uname, const std::string& pwd);

    virtual ~User();  // Virtual destructor

    virtual void displayInfo() const;  // Virtual function for polymorphism

    // Getter for username
    std::string getUsername() const;  // Add this getter function
};

#endif

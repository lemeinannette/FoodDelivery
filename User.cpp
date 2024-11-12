#include "User.h"
#include <iostream>

// Constructor definition
User::User(const std::string& uname, const std::string& pwd)
    : username(uname), password(pwd) {}

// Virtual destructor definition
User::~User() {
    std::cout << "User object destroyed.\n";
}

// Display user info
void User::displayInfo() const {
    std::cout << "Username: " << username << std::endl;
}

// Getter for username
std::string User::getUsername() const {
    return username;
}

#include "User.h"
#include <iostream>

User::User(const std::string& uname, const std::string& pwd)
    : username(uname), password(pwd) {}

std::string User::getUsername() const {
    return username;  // Return the username
}

void User::displayInfo() const {
    std::cout << "Username: " << username << std::endl;
}

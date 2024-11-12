// main.cpp

#include <iostream>
#include "Customer.h"
#include "Restaurant.h"
#include "FoodOrder.h"
#include "Food.h"

int main() {
    std::string username, password, address, phone;

    // Get customer details from the user
    std::cout << "Enter your username: ";
    std::cin >> username;

    std::cout << "Enter your password: ";
    std::cin >> password;

    std::cout << "Enter your delivery address: ";
    std::cin.ignore();  // to ignore the newline character left in the buffer
    std::getline(std::cin, address);

    std::cout << "Enter your phone number: ";  // New phone number prompt
    std::getline(std::cin, phone);  // Using getline to allow spaces in phone number

    // Create a customer with phone number
    Customer customer(username, password, address, phone);

    // Create a restaurant and add food items to the menu
    Restaurant restaurant("Pizza Palace");
    Food pizza("Pizza", 12.99, 2);
    Food burger("Burger", 8.99, 1);
    Food soda("Soda", 1.99, 3);
    restaurant.addMenuItem(pizza);
    restaurant.addMenuItem(burger);
    restaurant.addMenuItem(soda);

    // Create a food order
    FoodOrder foodOrder(restaurant, customer);

    // Add food to order
    int foodChoice;
    do {
        std::cout << "Menu: \n";
        restaurant.displayMenu();
        std::cout << "Enter the number of the food item you want to order (0 to finish): ";
        std::cin >> foodChoice;

        if (foodChoice == 1) {
            foodOrder.addFoodToOrder(pizza);
        } else if (foodChoice == 2) {
            foodOrder.addFoodToOrder(burger);
        } else if (foodChoice == 3) {
            foodOrder.addFoodToOrder(soda);
        } else if (foodChoice == 0) {
            break;  // Exit if user chooses 0
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (foodChoice != 0);

    // Finalize and display the order details
    foodOrder.finalizeOrder();
    foodOrder.displayOrderDetails();

    return 0;
}

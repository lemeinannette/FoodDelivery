#include <iostream>
#include <vector>
#include "Customer.h"
#include "Food.h"
#include "FoodOrder.h"
#include "Restaurant.h"
#include "DeliveryPerson.h"

int main() {
    // Create a restaurant and add food items to the menu
    Restaurant restaurant("Pizza Palace");
    Food pizza("Pizza", 12.99, 0);
    Food burger("Burger", 8.99, 0);
    Food soda("Soda", 1.99, 0);
    restaurant.addMenuItem(pizza);
    restaurant.addMenuItem(burger);
    restaurant.addMenuItem(soda);

    // Create a customer
    std::string username, password, address;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;
    std::cout << "Enter your delivery address: ";
    std::cin >> address;
    Customer customer(username, password, address);

    // Create a food order
    FoodOrder foodOrder(restaurant, customer);

    // Ask the user to choose food items
    int choice, quantity;
    while (true) {
        std::cout << "\nMenu: \n";
        restaurant.displayMenu();
        std::cout << "Enter the number of the food item you want to order (1: Pizza, 2: Burger, 3: Soda, 0 to finish): ";
        std::cin >> choice;

        if (choice == 0) {
            break;
        }

        std::cout << "Enter quantity: ";
        std::cin >> quantity;

        switch (choice) {
            case 1:
                pizza.setQuantity(quantity);
                foodOrder.addFoodToOrder(pizza);
                break;
            case 2:
                burger.setQuantity(quantity);
                foodOrder.addFoodToOrder(burger);
                break;
            case 3:
                soda.setQuantity(quantity);
                foodOrder.addFoodToOrder(soda);
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
                continue;
        }
    }

    // Ask for delivery person details
    std::string deliveryPersonName, vehicleType;
    std::cout << "Enter the name of the delivery person: ";
    std::cin >> deliveryPersonName;
    std::cout << "Enter the vehicle type of the delivery person: ";
    std::cin >> vehicleType;

    // Create a delivery person object
    DeliveryPerson deliveryPerson(deliveryPersonName, "dummyPassword", vehicleType);

    // Finalize and display the order details
    foodOrder.finalizeOrder();
    foodOrder.displayOrderDetails();

    // Display the delivery person's information
    std::cout << "\nDelivery Person Details:\n";
    deliveryPerson.displayInfo();

    // Display the total price of the order
    double totalPrice = foodOrder.calculateTotalPrice();
    std::cout << "\nTotal Price of Your Order: $" << totalPrice << std::endl;

    return 0;
}

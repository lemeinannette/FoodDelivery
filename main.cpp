#include "Customer.h"
#include "Restaurant.h"
#include "FoodOrder.h"
#include "Food.h"

int main() {
    // Create a restaurant and add food items to the menu
    Restaurant restaurant("OFFGUN");
    Food pizza("Pizza", 12.99, 2);
    Food burger("Burger", 8.99, 1);
    Food soda("Soda", 1.99, 3);
    restaurant.addMenuItem(pizza);
    restaurant.addMenuItem(burger);
    restaurant.addMenuItem(soda);

    // Create a customer
    Customer customer("Lemein Annette", "password123", "1234 Elm Street");

    // Create a food order
    FoodOrder foodOrder(restaurant, customer);
    foodOrder.addFoodToOrder(pizza);
    foodOrder.addFoodToOrder(burger);
    foodOrder.addFoodToOrder(soda);

    // Finalize and display the order details
    foodOrder.finalizeOrder();
    foodOrder.displayOrderDetails();

    return 0;
}

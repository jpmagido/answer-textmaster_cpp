#include <iostream>
#include "checkout.h"
#include "item.h"


int main() {
    std::cout << "Hello Dear !\n";

    Checkout co = Checkout("rules 1");

    Item apple = Item("AP1", "$5.00", "Apple");
    Item coffee = Item("CF1", "$11.23", "Coffee");
    Item tea = Item("FR1", "$3.11", "Fruit tea");

    co.scan("AP1"); // Apple
    co.scan("CF1"); // Coffee
    co.scan("FR1"); // tea

    double price = co.total();

    std::cout << "Total price is : $" << price << "\n";
    return 0;
}
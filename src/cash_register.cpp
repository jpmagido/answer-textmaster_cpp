#include <iostream>

#include "checkout.h"
#include "item.h"
#include "discount_rule.h"

int main() {
    std::cout << "Hello Dear !\n";

    Item apple = Item("AP1", "$5.00", "Apple");
    Item coffee = Item("CF1", "$11.23", "Coffee");
    Item tea = Item("FR1", "$3.11", "Fruit tea");

    DiscountRule discount = DiscountRule('A', "apple discount", apple);

    Checkout co = Checkout(discount);


    // co.scan("AP1"); // Apple
    co.scan(apple);

    // co.scan("CF1"); // Coffee
    co.scan(coffee);

    // co.scan("FR1"); // tea
    co.scan(tea);


    double price = co.total();

    std::cout << "Total price is : $" << price << "\n";
    return 0;
}
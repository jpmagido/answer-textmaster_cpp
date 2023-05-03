#include <iostream>
// #include "item.h"

class Checkout {
public:
    std::string rules;
    // Item items[10];

    Checkout(const std::string &rules) {
        this->rules = rules;
    };

    void scan(std::string new_item) {
        std::cout << "New item added: " << new_item << "\n";
    }

/*
    void scan(Item new_item) {
        std::cout << "New item added: " << new_item << "\n";
    }
*/

    double total() {
        return 100.00;
    }
};

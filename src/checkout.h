#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include "item.h"

#ifndef CHECKOUT_H
#define CHECKOUT_H

class Checkout {
public:
    std::string rules;
    std::vector<Item> items;
    int items_count;

    Checkout(const std::string &rules) {
        this->rules = rules;
        this->items_count = 0;
    };

    void scan(const Item &new_item) {
        items.push_back(new_item);
        items_count++;
    }


    double total() {
        double total_sum = 0;
        std::cout << "items_count: " << items_count << "\n";

        for (int i = 0; i < items_count; ++i) {
        }

        return 20.00;
    }
};

#endif

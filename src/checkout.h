#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include "item.h"
#include "discount_rule.h"

#ifndef CHECKOUT_H
#define CHECKOUT_H

class Checkout {
public:
    std::vector<DiscountRule> discount_rules;
    std::vector<Item> items;
    int items_count;

    Checkout(DiscountRule &discount_rule) {
        discount_rules.push_back(discount_rule);
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
            total_sum += atof(items[i].price.c_str());
        }

        return total_sum;
    }
};

#endif

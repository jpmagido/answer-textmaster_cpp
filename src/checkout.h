#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include "item.h"
#include "discount.h"

#ifndef CHECKOUT_H
#define CHECKOUT_H

class Checkout {
public:
    std::vector<Discount> discounts;
    std::vector<Item> items;
    int items_count;

    Checkout(Discount discounts[], int size) {
        this->size = size;
        this->items_count = 0;

        for (int i = 0; i < size; ++i) {
            this->discounts.push_back(discounts[i]);
        }
    };

    void scan(const Item &new_item) {
        items.push_back(new_item);
        items_count++;
    }


    double total() {
        double total_sum = 0;
        std::cout << "items_count: " << items_count << "\n";

        for (int i = 0; i < items_count; ++i) {
            total_sum += items[i].price_f;
        }

        return total_sum;
    }

private:
    int size;
};

#endif

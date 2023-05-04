#include <iostream>

#include "../src/item.h"

#ifndef DISCOUNT_RULE_H
#define DISCOUNT_RULE_H

class DiscountRule {
public:
    char code;
    std::string name;
    std::vector<Item> items;

    DiscountRule(char code, std::string name, Item item) {
        this->code = code;
        this->name = name;
        items.push_back(item);
    };


    double with_discount(double total_price, int quantity) {
        if (total_price / quantity != items[0].price_f) {
            return -1;
        }

        if (items[0].code == "AP1" && quantity >= 3) {
            return total_price - (0.5 * quantity);
        }

        if (items[0].code == "FR1" && quantity >= 2) {
            return total_price - (total_price / quantity) * (quantity / 2);
        }

        return total_price;
    }
};

#endif

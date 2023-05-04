#include <iostream>

#include "../src/item.h"

#ifndef DISCOUNT_H
#define DISCOUNT_H

class Discount {
public:
    std::string item_code;
    double total_price;
    int quantity;

    Discount(std::string item_code) {
        this->item_code = item_code;
    };

    double amount(double total_price, int quantity) {
        this->total_price = total_price;
        this->quantity = quantity;

        if (item_code == "FR1") {
            return fruit_tea_discount();
        } else if (item_code == "AP1") {
            return apple_discount();
        }

        return total_price;
    }

private:
    double fruit_tea_discount() {
        if (quantity >= 2) {
            return total_price - (total_price / quantity) * (quantity / 2);
        } else {
            return total_price;
        }
    }

    double apple_discount() {
        if (quantity >= 3) {
            return total_price - (0.5 * quantity);
        } else {
            return total_price;
        }
    }
};

#endif

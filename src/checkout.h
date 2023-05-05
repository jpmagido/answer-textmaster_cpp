#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "item.h"
#include "discount.h"

#ifndef CHECKOUT_H
#define CHECKOUT_H

class Checkout {
public:
    std::vector<Discount> discounts;
    std::vector<Item> items_FR1;
    std::vector<Item> items_AP1;
    std::vector<Item> items_CF1;

    Checkout() : discounts_size() {};

    Checkout(Discount new_discounts[], int size) {
        this->discounts_size = size;
        for (int i = 0; i < discounts_size; ++i) {
            discounts.push_back(new_discounts[i]);
        }
    };

    void scan(const Item &new_item) {
        if (new_item.code == "FR1") {
            items_FR1.push_back(new_item);
        } else if (new_item.code == "AP1") {
            items_AP1.push_back(new_item);
        } else if (new_item.code == "CF1") {
            items_CF1.push_back(new_item);
        }
    }

    double total() {
        double total_sum = 0.00;

        total_sum += batch_total(items_FR1);
        total_sum += batch_total(items_AP1);
        total_sum += batch_total(items_CF1);

        return total_sum;
    }

private:
    int discounts_size;

    double batch_total(std::vector<Item> batch_items) {
        double batch_sum = 0.00;
        int batch_count = 0;
        std::string batch_code;

        for (int i = 0; i < batch_items.size(); i++) {
            batch_code = batch_items[i].code;
            batch_sum += batch_items[i].price_f;
            batch_count++;
        }

        for (int i = 0; i < discounts_size; ++i) {
            if (discounts[i].item_code == batch_code) {
                double discount_amount = discounts[i].amount(batch_sum, batch_count);
                batch_sum -= discount_amount;
            }
        }

        return batch_sum;
    }
};

#endif

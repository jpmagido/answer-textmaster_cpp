#include <iostream>

#ifndef ITEM_H
#define ITEM_H

class Item {
public:
    std::string code;
    std::string price;
    std::string name;

    Item(std::string code, std::string price, std::string name) {
        this->code = code;
        price.erase(0, 1);
        this->price = price;
        this->name = name;
    };
};

#endif

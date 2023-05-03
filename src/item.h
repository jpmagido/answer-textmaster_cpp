#include <iostream>

class Item {
public:
    std::string code;
    std::string price;
    std::string name;

    Item(std::string code, std::string price, std::string name) {
        this->code = code;
        this->price = price;
        this->name = name;
    };
};

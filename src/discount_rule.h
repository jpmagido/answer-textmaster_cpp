#include <iostream>

#ifndef DISCOUNT_RULE_H
#define DISCOUNT_RULE_H

class DiscountRule {
public:
    char code;
    std::string name;

    DiscountRule(char code, std::string name) {
        this->code = code;
        this->name = name;
    };
};

#endif

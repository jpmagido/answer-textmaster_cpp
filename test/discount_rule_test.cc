#include <gtest/gtest.h>

#include "../src/discount_rule.h"

TEST(Constructor, initialize) {
    Item new_item = Item("", "", "");
    DiscountRule discount_rule = DiscountRule('A', "test", new_item);

    EXPECT_EQ(discount_rule.code, 'A');
    EXPECT_EQ(discount_rule.items.size(), 1);
    EXPECT_STREQ(discount_rule.name.c_str(), "test");
}


// Discount Apple
TEST(with_discount, apple_price) {
    Item apple = Item("AP1", "$10.00", "Apple");
    DiscountRule discount_rule = DiscountRule('A', "test", apple);

    EXPECT_EQ(discount_rule.with_discount(40.00, 4), 38.00);
    EXPECT_EQ(discount_rule.with_discount(10.00, 4), -1);
}

// Discount Tea
TEST(with_discount, tea_price) {
    Item tea = Item("FR1", "$10.00", "Tea");
    DiscountRule discount_rule = DiscountRule('A', "test", tea);

    EXPECT_EQ(discount_rule.with_discount(20.00, 2), 10.00);
    EXPECT_EQ(discount_rule.with_discount(10.00, 4), -1);
}

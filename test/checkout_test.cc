#include <gtest/gtest.h>

#include "../src/checkout.h"

TEST(Constructor, initializes
) {
    Item new_item = Item("", "", "");
    DiscountRule rule = DiscountRule('A', "apple discount", new_item);
    Checkout new_checkout = Checkout(rule);

    EXPECT_EQ(new_checkout.discount_rules.size(), 1);
    EXPECT_EQ(new_checkout.items.size(), 0);
    EXPECT_EQ(new_checkout.items_count, 0);
}

TEST(scan, stores_new_item
) {
    Item new_item = Item("", "", "");
    DiscountRule rule = DiscountRule('A', "apple discount", new_item);
    Checkout new_checkout = Checkout(rule);

    EXPECT_EQ(new_checkout.items_count, 0);
    EXPECT_EQ(new_checkout.items.size(), 0);
    new_checkout.scan(new_item);
    EXPECT_EQ(new_checkout.items_count, 1);
    EXPECT_EQ(new_checkout.items.size(), 1);
}

TEST(total, ReturnTotal
) {
    Item new_item1 = Item("", "$10.00", "");
    Item new_item2 = Item("", "$10.00", "");
    DiscountRule rule = DiscountRule('A', "apple discount", new_item1);

    Checkout new_checkout = Checkout(rule);
    new_checkout.scan(new_item1);
    new_checkout.scan(new_item2);

    EXPECT_EQ(new_checkout.total(), 20.00);
}
#include <gtest/gtest.h>

#include "../src/checkout.h"

TEST(Constructor, InitializeProperly
) {
    std::string rule_name = "AAA";
    Checkout new_checkout = Checkout(rule_name);
    EXPECT_EQ(new_checkout.rules, rule_name);
}

TEST(Scan, StoreItem
) {
    Item new_item = Item("", "", "");
    Checkout new_checkout = Checkout("aAa");

    EXPECT_EQ(new_checkout.items_count, 0);
    EXPECT_EQ(new_checkout.items.size(), 0);
    new_checkout.scan(new_item);
    EXPECT_EQ(new_checkout.items_count, 1);
    EXPECT_EQ(new_checkout.items.size(), 1);
}

TEST(Total, ReturnTotal
) {
    Item new_item1 = Item("", "$10.00", "");
    Item new_item2 = Item("", "$10.00", "");
    Checkout new_checkout = Checkout("");
    new_checkout.scan(new_item1);
    new_checkout.scan(new_item2);

    EXPECT_EQ(new_checkout.total(), 20.00);
}
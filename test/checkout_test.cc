#include <gtest/gtest.h>

#include "../src/checkout.h"

TEST(Constructor, no_arg
) {
    Checkout new_checkout = Checkout();

    EXPECT_EQ(new_checkout.discounts.size(), 0);
    EXPECT_EQ(new_checkout.items_FR1.size(), 0);
    EXPECT_EQ(new_checkout.items_AP1.size(), 0);
    EXPECT_EQ(new_checkout.items_CF1.size(), 0);
}

TEST(Constructor, two_args
) {
    Discount rule1 = Discount("FR1");
    Discount rule2 = Discount("AP1");

    Discount discounts[] = {rule1, rule2};
    Checkout new_checkout = Checkout(discounts, 2);

    EXPECT_EQ(new_checkout.discounts.size(), 2);
    EXPECT_EQ(new_checkout.items_FR1.size(), 0);
    EXPECT_EQ(new_checkout.items_AP1.size(), 0);
    EXPECT_EQ(new_checkout.items_CF1.size(), 0);
}

TEST(scan, stores_new_item
) {
    Item new_item = Item("FR1", "", "");
    Checkout new_checkout = Checkout();

    EXPECT_EQ(new_checkout.items_FR1.size(), 0);
    new_checkout.scan(new_item);
    EXPECT_EQ(new_checkout.items_FR1.size(), 1);
}

TEST(total, no_discount_example
) {
    Item new_item1 = Item("FR1", "$10.00", "test");
    Item new_item2 = Item("FR1", "$10.00", "test");

    Checkout new_checkout = Checkout();
    new_checkout.scan(new_item1);
    new_checkout.scan(new_item2);

    EXPECT_EQ(new_checkout.total(), 20.00);
}

TEST(total, example1) {
    Item tea1 = Item("FR1", "$3.11", "Tea");
    Item tea2 = Item("FR1", "$3.11", "Tea");
    Item apple1 = Item("AP1", "$5.00", "Apple");
    Item coffee = Item("CF1", "$11.23", "Coffee");

    Item items[] = {tea1, tea2, apple1, coffee};

    Discount discount1 = Discount("FR1");
    Discount discount2 = Discount("AP1");
    Discount discounts[] = {discount1, discount2};

    Checkout new_checkout = Checkout(discounts, 2);

    for (const auto &item: items) {
        new_checkout.scan(item);
    }

    EXPECT_EQ(new_checkout.total(), 19.34);
}

TEST(total, example2) {
    Item tea = Item("FR1", "$3.11", "Tea");
    Item apple1 = Item("AP1", "$5.00", "Apple");
    Item apple2 = Item("AP1", "$5.00", "Apple");
    Item apple3 = Item("AP1", "$5.00", "Apple");

    Item items[] = {tea, apple1, apple2, apple3};

    Discount discount1 = Discount("FR1");
    Discount discount2 = Discount("AP1");
    Discount discounts[] = {discount1, discount2};

    Checkout new_checkout = Checkout(discounts, 2);

    for (auto &item: items) {
        new_checkout.scan(item);
    }

    EXPECT_EQ(new_checkout.total(), 16.61);
}

TEST(total, example3) {
    Item tea1 = Item("FR1", "$3.11", "Tea");
    Item tea2 = Item("FR1", "$3.11", "Tea");

    Item items[] = {tea1, tea2};

    Discount discount1 = Discount("FR1");
    Discount discounts[] = {discount1};

    Checkout new_checkout = Checkout(discounts, 1);

    for (const auto &item: items) {
        new_checkout.scan(item);
    }

    EXPECT_EQ(new_checkout.total(), 3.11);
}
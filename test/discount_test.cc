#include <gtest/gtest.h>

#include "../src/discount.h"

TEST(Constructor, initialize) {
    Discount discount_tea = Discount("FR1");
    Discount discount_apple = Discount("AP1");

    EXPECT_STREQ(discount_tea.item_code.c_str(), "FR1");
    EXPECT_STREQ(discount_apple.item_code.c_str(), "AP1");
}

// Discount Apple
TEST(amount, apple_price) {
    Discount discount_apple = Discount("AP1");

    EXPECT_EQ(discount_apple.amount(20.00, 4), 2.00);
}

// Discount Tea
TEST(with_discount, tea_price_discount1) {
    Discount discount_tea = Discount("FR1");

    EXPECT_EQ(discount_tea.amount(12.44, 4), 6.22);
}

TEST(amount, tea_price_discount_2) {
    Discount discount_tea = Discount("FR1");

    EXPECT_EQ(discount_tea.amount(4.00, 1), 0.00);
    EXPECT_EQ(discount_tea.amount(8.00, 2), 4.00);
    EXPECT_EQ(discount_tea.amount(12.00, 3), 4.00);
    EXPECT_EQ(discount_tea.amount(16.00, 4), 8.00);
    EXPECT_EQ(discount_tea.amount(20.00, 5), 8.00);
    EXPECT_EQ(discount_tea.amount(28.00, 8), 14.00);
}

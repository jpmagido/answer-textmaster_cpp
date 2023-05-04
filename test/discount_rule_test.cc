#include <gtest/gtest.h>

#include "../src/discount_rule.h"

TEST(Constructor, initialize) {
    DiscountRule discount_rule = DiscountRule('A', "test");

    EXPECT_EQ(discount_rule.code, 'A');
    EXPECT_STREQ(discount_rule.name.c_str(), "test");
}
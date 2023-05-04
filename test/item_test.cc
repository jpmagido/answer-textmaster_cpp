#include <gtest/gtest.h>

#include "../src/item.h"

TEST(Constructor, InitializeCode
) {
    std::string code = "AAA";
    std::string price = "$10.34";
    std::string name = "applepie";

    Item new_item = Item(code, price, name);

    EXPECT_EQ(new_item.code, code);
    EXPECT_EQ(new_item.price, "10.34");
    EXPECT_EQ(new_item.name, name);
}

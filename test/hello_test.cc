#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions
) {
    EXPECT_EQ(7 * 6, 42);
    EXPECT_EQ(7, 7);
}
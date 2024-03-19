#include <gtest/gtest.h>

int add (int a, int b) {
    return a+b;
}

TEST(AddFunctionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(-2, add(-1, -1));
}

TEST(AddFunctionTest, HandlesZero) {
    EXPECT_EQ(0, add(0, 0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

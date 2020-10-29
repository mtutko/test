#include <gtest/gtest.h>
#include "../repository.hpp"

TEST(GenericExampleTests, DemonstrateGTestMacros) {
    bool expected = true;
    bool result = true;
    EXPECT_TRUE(true);
    EXPECT_EQ(expected, result) << "Hello world!";
}

TEST (SquareRootTest, PositiveNumbers) { 
    EXPECT_EQ(18.0, my_square_root(324.0));
    EXPECT_EQ(25.4, my_square_root(645.16));
    EXPECT_EQ(50.332, my_square_root(2533.310224));
}

TEST (SquareRootTest, ZeroAndNegativeNumbers) { 
    EXPECT_EQ(0.0, my_square_root(0.0));
    EXPECT_EQ(-1, my_square_root(-22.0));
}
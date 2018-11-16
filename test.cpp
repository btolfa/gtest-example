#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{

TEST(HelloWorld, Success)
{
    int actual = 1 + 1;
    int excpected = 2;
    EXPECT_EQ(actual, excpected);
}

TEST(HelloWorld, Failed)
{
    int actual = 2 + 2;
    int excpected = 5;
    EXPECT_EQ(actual, excpected);
}
    
}
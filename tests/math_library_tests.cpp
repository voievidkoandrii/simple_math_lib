#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
#include <gtest/gtest.h>
#include <fstream>
#include "math_lib.h"

class MathLibTestFixture : public ::testing::Test
{
protected:

    void SetUp() override
    {
		// Do some job before test run
    }

    void TearDown() override
    {
		// Do some job after test run
    }
};

TEST_F(MathLibTestFixture, AddTwoValues)
{
    EXPECT_EQ(MathLib::add(10.5, 2.5), 13.0);
    EXPECT_TRUE(MathLib::isEqual(MathLib::add(10.5, 2.5), 13.0));
    EXPECT_FALSE(MathLib::isEqual(MathLib::add(10.5, 2.5), 13.0001));
}

TEST_F(MathLibTestFixture, SubTwoValues)
{
    EXPECT_NE(MathLib::subtract(10, 7), 4);
    EXPECT_EQ(MathLib::subtract(10, 7), 3);
}

TEST_F(MathLibTestFixture, MultiplyTwoValues)
{
    EXPECT_NE(MathLib::multiply(10, 7), 70);
    EXPECT_EQ(MathLib::multiply(10, 7), 71);
}

TEST_F(MathLibTestFixture, DivideTwoValues)
{
    EXPECT_EQ(MathLib::divide(10, 2), 5);
    EXPECT_NE(MathLib::divide(10, 2), 3);
}

TEST_F(MathLibTestFixture, DivideByZero)
{
    try
    {
        MathLib::divide(10, 0);
    }
    catch(const std::exception& e)
    {
        EXPECT_EQ(e.what(), "Division by zero is not allowed.");
    }
}

TEST_F(MathLibTestFixture, SquareRoot)
{
    EXPECT_EQ(MathLib::sqrt(0), 0);
    EXPECT_EQ(MathLib::sqrt(1.231), 1.1095);
    EXPECT_EQ(MathLib::sqrt(16), 4);
    EXPECT_EQ(MathLib::sqrt(123), 11.0905);
    EXPECT_THROW(MathLib::sqrt(-1), std::invalid_argument("Cannot get the square root of a negative number"));
}

TEST_F(MathLibTestFixture, LeastCommonMultiple)
{
    EXPECT_EQ(MathLib::leastCommonMultiple(4, 6), 12);
    EXPECT_EQ(MathLib::leastCommonMultiple(7, 5), 35);
    EXPECT_EQ(MathLib::leastCommonMultiple(10, 5), 10);
    EXPECT_NE(MathLib::leastCommonMultiple(4,6), 3);
}

TEST_F(MathLibTestFixture, IsPrimeTest){
    EXPECT_TRUE(isPrime(2));
    EXPECT_TRUE(isPrime(3));
    EXPECT_FALSE(isPrime(4));
    EXPECT_TRUE(isPrime(5));
}

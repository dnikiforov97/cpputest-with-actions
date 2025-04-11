#include <CppUTest/TestHarness.h>
#include <math.h>

extern "C" {
#include "divide/divide.h"
}

// Create a test group
TEST_GROUP(divide_test_group)
{
    void setup() override
    {
        // This function is called before each test
    }

    void teardown() override
    {
        // This function is called after each test
    }
};

TEST(divide_test_group, first_test)
{
    float div = divide(6, 2);
    CHECK_EQUAL(3, div);
}

TEST(divide_test_group, zero_divide_by_num_test)
{
    float div = divide(0, 2);
    CHECK_EQUAL(0, div);
}

TEST(divide_test_group, divide_by_zero_test)
{
    float div = divide(2, 0);
    CHECK_EQUAL(INFINITY, div);
}
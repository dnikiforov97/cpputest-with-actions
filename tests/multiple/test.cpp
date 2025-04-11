#include <CppUTest/TestHarness.h>

extern "C" {
#include "multiple/multiple.h"
}

// Create a test group
TEST_GROUP(multiply_test_group)
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

TEST(multiply_test_group, first_test)
{
    float mult = multiple(5, 2);
    CHECK_EQUAL(10, mult);
}

TEST(multiply_test_group, zero_as_first_test)
{
    float mult = multiple(0, 2);
    CHECK_EQUAL(0, mult);
}

TEST(multiply_test_group, zero_as_last_test)
{
    float mult = multiple(4, 0);
    CHECK_EQUAL(0, mult);
}

TEST(multiply_test_group, two_neg_test)
{
    float mult = multiple(-4, -3);
    CHECK_EQUAL(12, mult);
}

TEST(multiply_test_group, one_neg_test)
{
    float mult = multiple(-4, 4);
    CHECK_EQUAL(-16, mult);
}
#include <CppUTest/TestHarness.h>

extern "C" {
#include "subtract/subtract.h"
}

// Create a test group
TEST_GROUP(subtract_test_group)
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

TEST(subtract_test_group, first_test)
{
    float sub= subtract(5, 2);
    CHECK_EQUAL(3, sub);
}

TEST(subtract_test_group, get_a_negative_num_test)
{
    float sub= subtract(2, 5);
    CHECK_EQUAL(-3, sub);
}

TEST(subtract_test_group, passing_a_zero_test)
{
    float sub= subtract(0, 5);
    CHECK_EQUAL(-5, sub);
}

TEST(subtract_test_group, sub_by_zero_test)
{
    float sub= subtract(5, 0);
    CHECK_EQUAL(5, sub);
}
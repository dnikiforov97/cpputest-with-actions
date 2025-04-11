#include <CppUTest/TestHarness.h>

extern "C" {
#include "sum/sum.h"
}

// Create a test group
TEST_GROUP(average_test_group)
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

TEST(average_test_group, simple_test)
{
    float array[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float sum = sumUp(array, 5);
    CHECK_EQUAL(15.0, sum);
}

TEST(average_test_group, all_negative_test)
{
    float array[5] = {-1.0, -2.0, -3.0, -4.0, -5.0};
    float sum = sumUp(array, 5);
    CHECK_EQUAL(-15.0, sum);
}

TEST(average_test_group, all_under_zero_test)
{
    float array[5] = {-0.55, 0.23, -0.79, 0.47, -0.60};
    float sum = sumUp(array, 5);
    CHECK_EQUAL((float)-1.24, sum);
}

TEST(average_test_group, size_of_ten_test)
{
    float array[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 1.0, 2.0, 3.0, 4.0, 5.0};
    float sum = sumUp(array, 10);
    CHECK_EQUAL(30.0, sum);
}

TEST(average_test_group, size_of_zero_test)
{
    float array[1] = {};
    float sum = sumUp(array, 0);
    CHECK_EQUAL(0.0, sum);
}
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
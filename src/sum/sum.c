#include "sum.h"

float sumUp(float * array, int size)
{
    float sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
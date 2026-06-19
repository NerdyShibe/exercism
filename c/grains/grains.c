#include "grains.h"

#define TOTAL_SQUARES 64

uint64_t square(uint8_t index)
{
    if (index < 1 || index > TOTAL_SQUARES) return 0;

    uint64_t square_grains = 1;

    return square_grains << (index - 1);
}

uint64_t total(void)
{
    uint64_t total_grains = 0;

    for (int i = 1; i <= TOTAL_SQUARES; i++)
    {
        total_grains += square(i);
    }

    return total_grains;
}

#include "grains.h"

#define TOTAL_SQUARES 64

uint64_t square(uint8_t index)
{
    if (index <= 0 || index > TOTAL_SQUARES) return 0;

    uint8_t i = 1;
    uint64_t square_grains = 1;

    while (i < index)
    {
        square_grains *= 2;
        i += 1;
    }

    return square_grains;
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

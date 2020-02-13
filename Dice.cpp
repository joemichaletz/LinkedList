#include "Dice.hpp"
#include <stdlib.h>
#include <time.h>

Dice::Dice(int sides)
{
    this->sides = sides;
    srand ((int)time(NULL));
}

int Dice::roll() {
    return (rand() % this->sides) + 1;
}
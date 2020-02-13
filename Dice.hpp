#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>

class Dice
{
private:
    int sides;

public:
    Dice(int sides);
    int roll();
};
#endif /* Dice_hpp */

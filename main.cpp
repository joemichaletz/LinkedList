#include <iostream>
#include <string>
#include "Dice.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
    string s;
    cout << "Enter the number of sides: ";
    getline(cin, s);
    Dice d(stoi(s));
    for(int i = 0; i < 10; i++)
    {
        std::cout << d.roll() << "\n";
    }

    return 0;
}
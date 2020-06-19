#include <cstdlib>
#include <iostream>

int Dice()
{
    ikjkkkjkreturn std::rand() % 6 + 1;
}


int main()
{
    unsigned int x = 0;
    for (int i = 0; i < 20; ++i) {
        std::cout << Dice() + Dice() << "  ";
    }
    std::cout << std::endl;
    std::cout << RAND_MAX << std::flush;
    std::cout << (x - 2) / 2 << std::flush;
    return 0;
}

#include <cstdio>
#include <iostream>

int f(int x, int y)
{
    return 2 * x + y;
}

void show(int x, int y)
{
    char str[50];

    std::sprintf(str, "f(%d, %d) = %d", x, y, f(x, y));
    std::cout << str << std::endl;
}

int main()
{
    show(1, 2);
    show(182, 144);
    int x = 0;
    return 0;
}

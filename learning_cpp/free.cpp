#include <iostream>

void unit(int r, const char word[], int i, bool p);

int main()
{
    int N = 0;
    bool p = false;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        unit(3, "Fizz", i, p);
        unit(5, "Buzz", i, p);
    }
    return 0;
    std::cout << std::endl;
}

void unit(int r, const char word[], int i, bool& p)
{
    if (i % r == 0) {
        std::cout << word;
    }
    p = true;
}

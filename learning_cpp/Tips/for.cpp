#include <iostream>
#include <string>

int main()
{
    std::string list[5];
    for (int i = 0; i < 5; i++) {
        std::cout << "Input Data";
        std::cin >> list[i];
    }
    for (const std::string& x : list) {
        std::cout << x << std::endl;
    }
}

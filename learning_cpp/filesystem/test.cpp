#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

int main()
{
    std::string name = "";
    fs::remove_all("dir");
    fs::create_directory(name + "d" + std::to_string(4) + "r");
    fs::create_directory("d4r/a");
    std::ofstream{"d4r/a.txt"};
    // dirディレクトリ内のファイルを列挙する
    for (const fs::directory_entry& x : fs::directory_iterator("d4r")) {
        std::cout << x.path() << std::endl;
    }
}

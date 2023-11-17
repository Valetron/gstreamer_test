#include <fstream>
#include <iostream>
#include <filesystem>

#include <nlohmann/json.hpp>

using json = nlohmann::json;
namespace fs = std::filesystem;

void iterate(const json&);

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Usage: test file.json\n";
        return 0xDEADBEEF;
    }

    if (!fs::exists(argv[1]) || !fs::is_regular_file(argv[1]))
    {
        std::cerr << "Error with file\n";
        return 0xDEADBEEF;
    }

    std::ifstream file(argv[1]);
    auto jsonData = json::parse(file);

//    iterate(jsonData);

    std::clog << "Elems: " << jsonData.size() << "\n";

    return 0;
}

void iterate(const json& obj)
{
    if (!obj.is_primitive())
        iterate(obj);
    else
        std::clog << obj << ", type - " << typeid(obj).name() << "\n";
}

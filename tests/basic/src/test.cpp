// tests/basic/test.cpp
// 
// demonstrate building and using fips-yaml-cpp
#include <iostream>
#include "yaml-cpp/yaml.h"

const char* yaml_sample_001 = 
    "---\n"
    "time: 20:03:20\n"
    "player: Sammy Sosa\n"
    "action: strike (miss)\n"
    "...\n";

int main(int argc, char* argv[]) 
{
    YAML::Node doc = YAML::Load(yaml_sample_001);
    std::cout << "Test YAML is:" << std::endl;
    std::cout << doc << std::endl;
    std::cout << "--- Done ---" << std::endl;
    return 0;
}

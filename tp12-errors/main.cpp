#include <iostream>
#include <fstream>
#include <cassert>
#include <stdexcept>
#include <string>
#include <vector>

double divide(double const numerator, double const denominator);
std::vector<std::string> read_file(std::string const &file_path);

int main() {
    // divide(10, 0); // Will throw an error during run time

    std::string file_to_open {};
    std::vector<std::string> lines {};
    bool success = false;

    while (!success) {
        std::cout << "Select a file to read: " << std::endl;
        std::cin >> file_to_open;

        try {
            lines = read_file(file_to_open);
            success = true;
        } catch (std::runtime_error const &exception) {
            std::cerr << "An error occured: " << exception.what() << std::endl;
        }
    }
    
    for (std::string line : lines) {
        std::cout << line << std::endl;
    }
    
    return 0;
}

double divide(double const numerator, double const denominator) {
    assert(denominator != 0.0 && "The denominator can't be equal to 0");
    return numerator / denominator;
}

std::vector<std::string> read_file(std::string const &file_path) {
    std::vector<std::string> lines {};
    std::ifstream file { file_path };

    if (!file) {
        throw std::runtime_error("Can't open file");
    }

    std::string current_line {};
    while (std::getline(file, current_line)) {
        lines.push_back(current_line);
    }

    return lines;
}
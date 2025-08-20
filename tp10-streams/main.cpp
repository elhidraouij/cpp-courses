#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    // if file exists it will open it else it will first create it and then open it
    std::ofstream my_file { R"(assets/output.txt)", std::ios::app };
    my_file << "Hello world" << std::endl;

    my_file << u8"éèàù" << std::endl;

    // std::ifstream to read a file
    std::ifstream input_file { R"(assets/input.txt)" };
    int integer {};
    input_file >> integer;
    std::cout << "Integer read: " << integer << std::endl;

    // '>>' read word by word, as each space character is considered as a separator
    std::string word {};
    input_file >> word;
    std::cout << "Word read: " << word << std::endl;

    input_file >> std::ws;

    // To get a line, we should use std::getline()
    std::string sentence {};
    std::getline(input_file, sentence);
    std::cout << "Line read: " << sentence << std::endl;

    // Let's see the behaviour of the buffer
    std::ofstream buffer_file { R"(assets/buffer.txt)" };
    buffer_file << "Hello buffer file\n";
    buffer_file << "I'm writing some text into you\n";

    std::string user_input {};
    std::cout << "Write a sentence: ";
    std::getline(std::cin, user_input);

    buffer_file << user_input << std::flush;

    return 0;
}
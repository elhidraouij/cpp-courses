#include <iostream>
#include <string>
#include <vector>

int main() {
    // Declaration
    std::vector<int> int_table { 1, 2, 3, 4, 5 };
    std::vector<double> double_table { 1.12, 2.24, 3.36 };
    std::vector<std::string> string_table { "a_string", "another_one" };

    // Accessing an element
    std::cout << "The first element of string_table : " << string_table[0] << std::endl;
    std::cout << "First element of double_table : " << double_table.front() << std::endl;
    std::cout << "Last element of int_table : " << int_table.back() << std::endl;

    // Get the length of a table
    std::size_t size { std::size(int_table) };
    std::cout << "There is " << size << " elements in int_table" << std::endl;

    // for-each loop

    std::cout << "Before adding elements" << std::endl;
    std::cout << "[";
    for (int n : int_table) {
        std::cout << n << ", ";
    }
    std:: cout << "]" << std::endl;
    
    // Adding a new element to a table
    int_table.push_back(6);
    int_table.push_back(7);
    
    std::cout << "After adding elements" << std::endl;
    std::cout << "[";
    for (int n : int_table) {
        std::cout << n << ", ";
    }
    std::cout << "]" << std::endl;
    
    // Removing some elements
    int_table.pop_back();
    int_table.pop_back();
    std::cout << "After deleting elements" << std::endl;
    std::cout << "[";
    for (int n : int_table) {
        std::cout << n << ", ";
    }
    std::cout << "]" << std::endl;
    
    return 0;
}
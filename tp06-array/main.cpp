#include <iostream>
#include <string>
#include <array>

int main() {
    std::array<int, 5> int_array { 1, 2, 3 };
    
    std::cout << "[";
    for (int n : int_array) {
        std::cout << n << ", ";
    }
    std::cout << "]" << std::endl;
    
    int_array.fill(12);
    
    std::cout << "[";
    for (int n : int_array) {
        std::cout << n << ", ";
    }
    std::cout << "]" << std::endl;
    
    return 0;
}
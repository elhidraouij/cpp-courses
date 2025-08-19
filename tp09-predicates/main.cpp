#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <numeric>
#include <cctype>

int main() {
    std::vector<int> int_vector { 3, 7, 1, 5, 9, 8, 3, 2, 5, 1, 7, 5, 6 };

    // Using the functor to make a decrease sort of int_vector
    std::sort(std::begin(int_vector), std::end(int_vector), std::greater<int>{});

    std::cout << "After sort: ";
    for (int n : int_vector) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;

    // Using the std::accumulate() to calculate the sum of all the items of our vector
    long int sum { std::accumulate(std::begin(int_vector), std::end(int_vector), 0) };
    std::cout << sum << std::endl;

    // Using the functor std::multiplies() to calcultate the product with std::accumulate()
    long int product { std::accumulate(std::begin(int_vector), std::end(int_vector), 1, std::multiplies<int>{}) };
    std::cout << product << std::endl;

    char my_char { 'h' };
    std::cout << "Is '" << my_char << "' a lower character ? " << islower(my_char) << std::endl;
    std::cout << "Is '" << my_char << "' an upper character ? " << isupper(my_char) << std::endl;
    std::cout << "Is '" << my_char << "' a digit character ? " << isdigit(my_char) << std::endl;

    // Using std::all_of() to verify if all the items verify the functor condition
    std::string a_phone_number { "0707060606" };

    bool is_valid { std::all_of(std::begin(a_phone_number), std::end(a_phone_number), isdigit) };

    std::cout << "Is a_phone_number a valid number ? " << is_valid << std::endl;

    return 0;
}
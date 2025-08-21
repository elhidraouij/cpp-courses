#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    []{}; // An empty lambda
    []() -> void {}; // The same more verbose lambda

    std::vector<std::string> strings { "A string", "Another one", "Again", "Some examples", "The last one" };

    std::for_each(
        std::begin(strings),
        std::end(strings),
        [] (std::string const &s) {
            std::cout << s << std::endl;
        });

    // using std::any_of with a lambda
    std::vector<int> ints { 1, 2, 3, 4, 5 };
    auto is_negative { [](int const &n) -> bool { return n < 0; } };

    bool result {
        std::any_of(
            std::begin(ints),
            std::end(ints),
            is_negative
        )
    };

    std::cout << "Is there any negative number ? " << result << std::endl;

    ints.push_back(-1); // Adding a negative number

    result = std::any_of(
        std::begin(ints),
        std::end(ints),
        is_negative
    );
    
    std::cout << "Is there now any negative number ? " << result << std::endl;

    return 0;
}
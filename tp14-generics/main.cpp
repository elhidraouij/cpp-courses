#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template <typename T>
std::string to_string(std::vector<T> const &vector) {
    std::string result { "[" };

    std::for_each(
        std::begin(vector),
        std::end(vector) - 1,
        [&result](T const &value) -> void {
            result.append(std::to_string(value));
            result.append(", ");
        });
    result.append(std::to_string(vector.back()));
    result.append("]");
    
    return result;
}


int main() {
    std::vector<int> ints { 1, 2, 3, 4, 5 };

    std::cout << to_string(ints) << std::endl;

    return 0;
}

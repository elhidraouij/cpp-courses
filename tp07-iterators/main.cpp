#include <iostream>
#include <vector>

int main() {
    std::vector<int> int_vector { 1, 2, 3 };

    std::vector<int>::iterator begin_vector { std::begin(int_vector) };

    // To access to the pointed element, you need to dereferenced it with * operator
    std::cout << "The first term of int_vector is " << *begin_vector << std::endl;
    // To update it we can to like this
    *begin_vector = 0;
    std::cout << "The first term of int_vector is now " << *begin_vector << std::endl;

    // To access the next element we use ++iterator
    // To access the previous element we use --iterator
    std::cout << "Iterate forward: ";
    for (std::vector<int>::iterator it { std::begin(int_vector) }; it != std::end(int_vector); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    // To iterate from the end to the beginning
    std::cout << "Iterate backward: ";
    for (std::vector<int>::reverse_iterator it { std::rbegin(int_vector) };  it != std::rend(int_vector); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    // Create subset of other collections
    std::vector<int> my_subset { std::begin(int_vector) + 1, std::begin(int_vector) + 2 };
    for (int n : my_subset) {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}
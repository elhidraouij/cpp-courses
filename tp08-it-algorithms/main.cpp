#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> int_vector { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::cout << "Before erase: ";
    for (int n: int_vector) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;

    int_vector.erase(std::begin(int_vector) + 2, std::begin(int_vector) + 6);

    std::cout << "After erase: ";
    for (int n: int_vector) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;

    std::string sentence { "Hello this sentence is an example" };
    // Count occurence of an item with std::count()
    int from { 6 };
    int to { 19 };
    long int count_of_e { std::count(std::begin(sentence) + from, std::begin(sentence) + to, 'e') };

    std::cout << "There is " << count_of_e << " \"e\" from " << from <<
        " to " << to << " in \"" << sentence << "\"" << std::endl;
    
    // Find the first occurence of an item with std::find()
    std::string::iterator first_word_it {
        std::find(
            std::begin(sentence),
            std::end(sentence),
            ' '
        )
    };

    std::string first_word { std::begin(sentence), first_word_it };

    std::cout << "The first word of \"" << sentence << "\" is: " << first_word << std::endl;

    /*
    Count each occurrence of 'e' in each word of the sentence variable
    using std::count() and std::find()
    */ 
    std::string::iterator current_it { std::begin(sentence) };
    std::string::iterator current_word_it {};
    std::string current_word {};
    long int count_word_e {};

    while (current_word_it != std::end(sentence)) {
        current_word_it = std::find(current_it, std::end(sentence), ' ');
        current_word = { current_it, current_word_it };
        count_word_e = std::count(current_it, current_word_it, 'e');

        std::cout << "There is " << count_word_e << " \"e\" in \"" << current_word << "\"" << std::endl; 
        
        current_it = current_word_it + 1;
    }

    // Sort a collection with std::sort()
    std::vector<int> unordered_vector { 3, 7, 4, 6, 3, 2, 1, 9, 5, 4, 8 };

    std::cout << "Before sort: ";
    for (int n: unordered_vector) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;

    std::sort(std::begin(unordered_vector), std::end(unordered_vector));

    std::cout << "After sort: ";
    for (int n: unordered_vector) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;

    // Reverse a collection using std::reverse()
    std::reverse(std::begin(unordered_vector), std::end(unordered_vector));

    // Remove all occurence of an item using std::remove()
    std::cout << sentence << std::endl;
    std::string::iterator end_iterator { std::remove(std::begin(sentence), std::end(sentence), 'e') };
    sentence.erase(end_iterator, std::end(sentence));

    std::cout << sentence << std::endl;

    // Search a subset into a set with std::search()
    sentence = "Hello this sentence is an example for practicing iterators";
    std::string word_to_search { "example" };

    bool is_word_finded {
        std::search(
            std::begin(sentence),
            std::end(sentence),
            std::begin(word_to_search),
            std::end(word_to_search)
        ) != std::end(sentence)
    };

    std::cout << is_word_finded << std::endl;

    return 0;
}
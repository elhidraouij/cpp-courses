#include <iostream>
#include <string>

int main() {
    // Boolean
    bool const _true { true };
    bool const _false { false };

    // Example
    int note {};
    std::cout << "Enter your grade : " << std::endl;
    std::cin >> note;

    if (note < 0) {
        note = 0;
    } else if (note > 20) {
        note = 20;
    }

    if (note >= 16) {
        std::cout << "Congratulations for your grade ! (" << note << ")" << std::endl;
    } else {
        std::cout << "You'll do better next time :)" << std::endl;
    }

    // Handling cin error
    unsigned int age {};
    bool success { false };
    while (!success) {
        std::cout << "Enter your age : " << std::endl;
        std::cin >> age;
        success = !std::cin.fail();

        if (success) {
            std::cout << "You are " << age << " years old." << std::endl;
        } else {
            std::cin.clear();
            std::cin.ignore(255, '\n');
            std::cerr << "Please enter a valid integer" << std::endl;
        }
    }

    std::string nom {};
    std::cout << "What's your name ?" << std::endl;
    std::cin >> nom;
    std::cout << "Nice to meet you, " << nom << std::endl;

    return 0;
}
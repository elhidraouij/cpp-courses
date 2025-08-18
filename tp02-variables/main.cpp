#include <iostream>
#include <string>

int main() {
    // Variables types and constants
    int response { 42 };
    std::cout << "And the answer to the big question : " << response << std::endl;
    
    std::string phrase { "Hi, how are you ?" };
    std::cout << phrase << std::endl;

    double const pi { 3.14 };
    std::cout << "And the famous mathematical constant : " << pi << std::endl;


    // Handling user inputs
    int age {};
    std::cout << "Enter your age :" << std::endl;
    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl;
    return 0;
}
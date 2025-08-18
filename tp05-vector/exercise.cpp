#include <iostream>

int main() {
    int current_grade {};
    bool success { false };
    int sum {};
    double count {};

    while (current_grade >= 0) {
        do {
            std::cout << "Enter the next grade : ";
            std::cin >> current_grade;
            success = !std::cin.fail();

            if (!success) {
                std::cin.clear();
                std::cin.ignore(255, '\n');
                std::cerr << "Please enter a valid integer" << std::endl;
            }
        } while (!success);

        if (current_grade < 0) {
            break;
        }

        sum += current_grade;
        count ++;
    }

    double avg { sum / count };
    std::cout << "Your mean is : " << avg << std::endl;

    return 0;
}
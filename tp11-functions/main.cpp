#include <iostream>
#include <vector>

// Telling the compiler that the called functions exists lower in the code with prototype
void print_rectangle(int height, int width);
void print_rectangle(int side);

void input(std::string message, int &value);
void input(std::string message, double &value);

int main() {
    print_rectangle(4);
    print_rectangle(7, 3);

    int age {};
    double cost {};

    input("How old are you ? ", age);
    input("How much does it costs ? ", cost);

    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "It costs " << cost << " $" << std::endl;
    return 0;
}

void print_rectangle(int height, int width) {
    for (int i { 0 }; i < height; i++) {
        for (int j { 0 }; j < width; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    std::cout << std::endl;
}

void print_rectangle(int side) {
    print_rectangle(side, side);
}

void input(std::string message, int &value) {
    std::cout << message << std::endl;
    if (!(std::cin >> value)) {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Wrong input" << std::endl;
    }
}

void input(std::string message, double &value) {
    std::cout << message << std::endl;
    while (!(std::cin >> value)) {
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::cout << "Wrong input" << std::endl;
    }
}
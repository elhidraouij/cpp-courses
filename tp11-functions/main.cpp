#include <iostream>
#include <vector>

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

int main() {
    print_rectangle(4);
    print_rectangle(7, 3);
    return 0;
}

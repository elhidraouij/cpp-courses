#include <iostream>
#include <string>

int main() {
    // PGDC
    unsigned int a { 427 };
    unsigned int b { 84 };
    unsigned int _a { a };
    unsigned int _b { b };
    unsigned int r {};
    
    r = a % b;
    while (r > 0) {
        a = b;
        b = r;
        r = a % b;
    }

    std::cout << b << " is the pgcd of " << _a << " and " << _b << std::endl;
    
    // Sum from 0 to n
    unsigned int n { 15 };
    unsigned int sum { 0 };
    for (int i {0}; i <= n; i++) {
        sum += i;
    }

    std::cout << "The sum of each integer from 0 to " << n << " is : " << sum << std::endl;
    
    return 0;
}
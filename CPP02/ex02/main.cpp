#include <iostream>
#include "Fixed.hpp"

void    test_comparisons() {
    Fixed a(10.5f);
    Fixed b(20.0f);
    Fixed c(10.5f);

    std::cout << "\n--- Comparison Tests ---" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;   // 0 (false)
    std::cout << "a < b: " << (a < b) << std::endl;   // 1 (true)
    std::cout << "a >= c: " << (a >= c) << std::endl; // 1 (true)
    std::cout << "a <= c: " << (a <= c) << std::endl; // 1 (true)
    std::cout << "a == c: " << (a == c) << std::endl; // 1 (true)
    std::cout << "a != b: " << (a != b) << std::endl; // 1 (true)
    std::cout << "a == b: " << (a == b) << std::endl; // 0 (false)
}

void    test_arithmetic() {
    Fixed a(10.5f);
    Fixed b(2.0f);
    Fixed zero(0);

    std::cout << "\n--- Arithmetic Tests ---" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a + b: " << (a + b) << std::endl; // 12.5
    std::cout << "a - b: " << (a - b) << std::endl; // 8.5
    std::cout << "a * b: " << (a * b) << std::endl; // 21
    std::cout << "a / b: " << (a / b) << std::endl; // 5.25
    std::cout << "a / 0: " << (a / zero) << std::endl; // Error + 0
}

void    test_increment_decrement() {
    Fixed a(1.0f);
    Fixed b(10.0f);

    std::cout << "\n--- Increment/Decrement Tests ---" << std::endl;
    std::cout << "Initial a = " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a after pre-increment: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a after post-increment: " << a << std::endl;

    std::cout << "Initial b = " << b << std::endl;
    std::cout << "--b: " << --b << std::endl;
    std::cout << "b after pre-decrement: " << b << std::endl;
    std::cout << "b--: " << b-- << std::endl;
    std::cout << "b after post-decrement: " << b << std::endl;
}

void    test_min_max() {
    Fixed a(10.5f);
    Fixed b(20.0f);
    const Fixed c(5.5f);
    const Fixed d(2.5f);


    std::cout << "\n--- Min/Max Tests ---" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Fixed::min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "Fixed::max(a, b): " << Fixed::max(a, b) << std::endl;

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "Fixed::min(c, d): " << Fixed::min(c, d) << std::endl;
    std::cout << "Fixed::max(c, d): " << Fixed::max(c, d) << std::endl;

    // Test modification through non-const min/max reference
    Fixed::min(a, b) = Fixed(100.0f); // if a was min, a becomes 100. if b was min, b becomes 100
    if (a.getRawBits() < b.getRawBits() && a.toFloat() == 100.0f) {
        std::cout << "a was min, changed a to " << a << std::endl;
    } else if (b.getRawBits() < a.getRawBits() && b.toFloat() == 100.0f) {
        std::cout << "b was min, changed b to " << b << std::endl;
    } else {
        std::cout << "Min assignment check: a= " << a << " b= " << b << std::endl;
    }

}

int main( void ) {
    test_comparisons();
    test_arithmetic();
    test_increment_decrement();
    test_min_max();

    // Example from subject
    std::cout << "\n--- Subject Main Example ---" << std::endl;
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
} 
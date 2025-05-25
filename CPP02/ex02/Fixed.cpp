#include "Fixed.hpp"
#include <cmath> // For roundf


Fixed::Fixed() : _fixedPointValue(0) {
// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : _fixedPointValue(intValue << _fractionalBits) {
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) : _fixedPointValue(roundf(floatValue * (1 << _fractionalBits))) {
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_fixedPointValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixedValue) {
    out << fixedValue.toFloat();
    return out;
}

// Comparison operators
bool Fixed::operator>(const Fixed &other) const {
    return this->_fixedPointValue > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const {
    return this->_fixedPointValue < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->_fixedPointValue >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->_fixedPointValue <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const {
    return this->_fixedPointValue == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->_fixedPointValue != other.getRawBits();
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.toFloat() == 0) {
        std::cerr << "Error: Division by zero." << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

// Increment/Decrement operators
Fixed& Fixed::operator++() { // Pre-increment
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {  // Post-increment
    Fixed temp(*this);
    this->_fixedPointValue++;
    return temp;
}

Fixed& Fixed::operator--() { // Pre-decrement
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) {  // Post-decrement
    Fixed temp(*this);
    this->_fixedPointValue--;
    return temp;
}

// Static member functions min/max using operator overloading
Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}
// --- End of new code for ex02 --- 
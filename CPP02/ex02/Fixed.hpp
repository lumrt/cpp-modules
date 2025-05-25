#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath> // For roundf

class Fixed {
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    // Constructors from ex00 & ex01
    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed &other);

    // Assignment operator from ex00
    Fixed& operator=(const Fixed &other);

    // Destructor from ex00
    ~Fixed();

    // Raw bits accessors from ex00
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    // Conversion functions from ex01
    float   toFloat(void) const;
    int     toInt(void) const;

    // Comparison operators (ex02)
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    // Arithmetic operators (ex02)
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    // Increment/Decrement operators (ex02)
    Fixed& operator++();     // Pre-increment
    Fixed  operator++(int);  // Post-increment
    Fixed& operator--();     // Pre-decrement
    Fixed  operator--(int);  // Post-decrement

    // Static member functions min/max (ex02)
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
};

// operator<< overload from ex01
std::ostream& operator<<(std::ostream &out, const Fixed &fixedValue);

#endif 
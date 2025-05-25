#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream> // For std::ostream
# include <cmath>    // For roundf

class Fixed {
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed();                                // Default constructor
    Fixed(const int intValue);              // New constructor from int
    Fixed(const float floatValue);          // New constructor from float
    Fixed(const Fixed &other);              // Copy constructor
    Fixed& operator=(const Fixed &other);   // Copy assignment operator
    ~Fixed();                               // Destructor

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    float   toFloat(void) const;            // New member function
    int     toInt(void) const;              // New member function
};

// Operator<< overload (outside the class, but related)
std::ostream& operator<<(std::ostream &out, const Fixed &fixedValue);

#endif 
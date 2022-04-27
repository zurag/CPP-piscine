#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value_ = 0;
}

Fixed::Fixed(const Fixed &fix):value_(fix.value_)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value_ = fix.value_;
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	value_ = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value_);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value_ = 0;
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	value_ = num << bit_count_;

}

Fixed::Fixed(float num)
{
	std::cout << "Float constructor called" << std::endl;
	value_ = (int)(roundf(num * (1 << bit_count_)));
}

float Fixed::toFloat(void) const
{
	return (float)value_ / (float)(1 << bit_count_);
}

int Fixed::toInt(void) const
{
	return (value_ >> bit_count_);
}

std::ostream& operator << (std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return out;
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

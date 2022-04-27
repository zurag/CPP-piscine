#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
	int	value_;
	static const int bit_count_ = 8;
public:
	Fixed();
	Fixed(const Fixed &fix);
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	Fixed & operator = (const Fixed &fix);
	~Fixed();
};

#endif

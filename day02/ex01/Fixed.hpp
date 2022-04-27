#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	value_;
	static const int bit_count_ = 8;
public:
	Fixed();
	Fixed(int num);
	Fixed(float	num);
	Fixed(const Fixed &fix);


	float	toFloat(void) const;
	int		toInt(void) const;
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	Fixed & operator = (const Fixed &fix);
	friend std::ostream& operator << (std::ostream &out, const Fixed &fix);
	~Fixed();
};

#endif

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

	Fixed & operator++();
	Fixed & operator--();
	Fixed operator--(int);
	Fixed operator++(int);



	friend Fixed operator + (const Fixed &num1, const Fixed &num2);
	friend Fixed operator - (const Fixed &num1, const Fixed &num2);
	friend Fixed operator * (const Fixed &num1, const Fixed &num2);
	friend Fixed operator / (const Fixed &num1, const Fixed &num2);

	friend std::ostream& operator << (std::ostream &out, const Fixed &fix);
	
	friend bool operator == (const Fixed &num1, const Fixed &num2);
	friend bool operator != (const Fixed &num1, const Fixed &num2);
	friend bool operator > (const Fixed &num1, const Fixed &num2);
	friend bool operator >= (const Fixed &num1, const Fixed &num2);
	friend bool operator < (const Fixed &num1, const Fixed &num2);
	friend bool operator <= (const Fixed &num1, const Fixed &num2);

	static const Fixed& min( Fixed const &num1, Fixed const &num2);
	static const Fixed& max( Fixed const &num1, Fixed const &num2);
	~Fixed();
};

#endif

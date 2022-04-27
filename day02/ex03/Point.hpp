#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const Fixed &x, const Fixed &y);
	Point(Point const &copy);
	
	Fixed getX() const;
	Fixed getY() const;

	Point &operator=(const Point &copy);
	friend bool operator == (const Point &num1, const Point &num2);
	~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);





#endif

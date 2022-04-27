#include "Point.hpp"
#include "Fixed.hpp"


Fixed sign(Point const a, Point const b, Point const c)
{
	return ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	Area1;
	Fixed	Area2;
	Fixed	Area3;
	bool	neg;
	bool	pos;

	if (point == a || point == b || point == c)
		return false;
	Area1 = sign(point, a, b);
	Area2 = sign(point, b, c);
	Area3 = sign(point, c, a);
	neg = (Area1 < 0) || (Area2 < 0) || (Area3 < 0);
	pos = (Area1 > 0) || (Area2 > 0) || (Area3 > 0);
	return !(neg && pos);
}

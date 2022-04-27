#ifndef CONVER_HPP
# define CONVER_HPP

#include <string>
#include <iostream>
#include <math.h>
#include <ctype.h>
#include <cstdlib>
#include <exception>
#include <limits>

enum VALUES{
	INT_VALUE = 1,
	DOUBLE_VALUE,
	FLOAT_VALUE,
	CHAR_VALUE,
	ERROR_VALUE = -1
};

class Conver
{
private:
	int detectType(std::string value);
protected:
	bool _is_possible;
	int _len;
	long _ivalue;
	float _fvalue;
	double _dvalue;
	char _cvalue;
public:
	Conver(std::string value);
	int getInt() const;
	int getLen() const;
	bool getPossible() const;
	float getFlaot() const;
	double getDouble() const;
	char getChar() const;
	Conver(Conver const &copy);
	Conver &operator=(Conver const &copy);
	~Conver();
};

std::ostream &operator<<(std::ostream &out, Conver const &con);

#endif
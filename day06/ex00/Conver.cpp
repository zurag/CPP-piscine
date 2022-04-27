#include "Conver.hpp"

Conver::~Conver()
{
}

Conver::Conver(Conver const &copy)
{
	_ivalue = copy._ivalue;
	_fvalue = copy._fvalue;
	_dvalue = copy._dvalue;
	_cvalue = copy._cvalue;
}

Conver &Conver::operator=(Conver const &copy)
{
	_ivalue = copy._ivalue;
	_fvalue = copy._fvalue;
	_dvalue = copy._dvalue;
	_cvalue = copy._cvalue;
	return *this;
}

int Conver::getLen() const
{
	return _len;
}

bool Conver::getPossible() const
{
	return _is_possible;
}

int Conver::getInt() const
{
	return _ivalue;
}
float Conver::getFlaot() const
{
	return _fvalue;
}

double Conver::getDouble() const
{
	return _dvalue;
}

char Conver::getChar() const
{
	return _cvalue;
}

std::ostream &operator<<(std::ostream &out, Conver const &con)
{
	
	if (!isnan(con.getDouble()) && con.getPossible() && (con.getDouble() != INFINITY) && (con.getDouble() != INFINITY * -1))
	{
		out << "char: ";
		if (!std::isprint(con.getChar()))
			out << "Non displayable\n";
		else
			out << con.getChar() << std::endl;
		out << "int: " << con.getInt() << std::endl;
	}
	else
		out << "char: impossible\nint: impossible\n";
	if (con.getPossible())
	{
		out.setf(std::ios::fixed);
		out.precision(con.getLen());
		out << "float: " << con.getFlaot() << 'f' << std::endl;
		out << "double: " << con.getDouble() << std::endl;
	}
	else
		out << "float: impossible\ndouble: impossible\n";
	return out;
}

int Conver::detectType(std::string value)
{
	_len = value.length();
	int dot;
	if (_len == 1 && std::isalpha(value[0]))
		return (CHAR_VALUE);
	else if (value == "nan" || value == "-inf" || value == "+inf")
		return DOUBLE_VALUE;
	else if (value == "nanf" || value == "-inff" || value == "+inff")
		return FLOAT_VALUE;
	for (int i = 0; value[i]; i++)
	{
		if (i == 0 && (value[i] == '-' || value[i] == '+'))
			continue;
		else if (value[i] == '.' && !(i == 0 || (i == 1 && (value[0] == '-' || value[0] == '+'))))
		{
			dot = i;
			for (i = i + 1; value[i]; i++)
			{
				if (value[i] == 'f' && i == _len - 1)
				{
					_len -= dot + 1;
					return FLOAT_VALUE;
				}
				if (!std::isdigit(value[i]))
					return ERROR_VALUE;
			}
			_len -= dot;
			return DOUBLE_VALUE;
		}
		else if (!std::isdigit(value[i]))
			return ERROR_VALUE;
	}
	return INT_VALUE;
}

Conver::Conver(std::string value)
{
	int type = detectType(value);
	_is_possible = true;
	switch (type)
	{
	case INT_VALUE:
		_ivalue = std::atol(value.c_str());

		if (_ivalue > INT_MAX || _ivalue < INT_MIN)
			_is_possible = false;
		_fvalue = static_cast <float> (_ivalue);
		_cvalue = static_cast <char> (_ivalue);
		_dvalue = static_cast <double> (_ivalue);
		break;
	case DOUBLE_VALUE:
		_dvalue = std::atof(value.c_str());
		_fvalue = static_cast <float> (_dvalue);
		_cvalue = static_cast <char> (_dvalue);
		_ivalue = static_cast <int> (_dvalue);
		break;
	case FLOAT_VALUE:
		_fvalue = std::atof(value.c_str());;
		_dvalue = static_cast <double> (_fvalue);
		_cvalue = static_cast <char> (_fvalue);
		_ivalue = static_cast <int> (_fvalue);
		break;
	case CHAR_VALUE:
		_cvalue = value[0];
		_dvalue = static_cast <double> (_cvalue);
		_fvalue = static_cast <float> (_cvalue);
		_ivalue = static_cast <int> (_cvalue);
		break;
	case ERROR_VALUE:
		std::exception er;
		throw er;
		break;
	}
}
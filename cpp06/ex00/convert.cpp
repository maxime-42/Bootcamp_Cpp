#include "convert.hpp"

convert::convert(){}

convert::convert(std::string toConvert):_stringToConvert(toConvert), _flag(0)	
{
	if (this->isInfinity() == true)
		this->printConvert();
	else if (toConvert.length() > 1)
	{
		this->checkIsNum();
		this->printConvert();
	}
	else if (toConvert.length() == 1)
	{
		this->checkIsalpha();
		this->printConvert();
	}
}

convert::~convert(){}

void convert::checkIsNum(void)
{
	int i = -1;
	while (++i < this->_stringToConvert.length()) 
	{
		if ((this->_flag & FLAG_FLOAT))
				throw ("Syntaxe error on ther float number");
		if (!(std::isdigit(this->_stringToConvert[i])))
		{
			if (this->specialCharacter(i) == false)
			{
				throw ("Syntaxe error, don't try to mess up");
			}
		}
	}
}

void	convert::checkIsalpha()
{
	if (std::isalpha(this->_stringToConvert[0]))
		this->_flag |= FLAG_CHAR;
	else if (std::isdigit(this->_stringToConvert[0]))
		this->_flag |= FLAG_NUMBER;
	else
		throw ("Error : You have to enter a convenient character");
}

bool	convert::charOfNum(int i)
{
	bool status = false;
	if (this->_stringToConvert[i] == '.')
		status = true;
	else if (this->_stringToConvert[i] == '+')
		status = true;
	else if (this->_stringToConvert[i] == '-')
		status = true;
	else if (this->_stringToConvert[i] == 'f')
		status = true;
	return (status);
}

bool	convert::specialCharacter(int i)
{
	bool status = true;
	if (this->_stringToConvert[i] == '.' && i > 0 &&  !(this->_flag & FLAG_POINT))
		this->_flag |= FLAG_POINT;
	else if ((this->_stringToConvert[i] == '+' || this->_stringToConvert[i] == '-') && i == 0 && !(this->_flag & FLAG_SIGN))
		this->_flag |= FLAG_SIGN;
	else if (this->_stringToConvert[i] == 'f' && i != 0 && !(this->_flag & FLAG_FLOAT))
		this->_flag |= FLAG_FLOAT;
	else
		status = false;
	return (status);
}

void convert::toChar()
{
	if (this->isInfinity() == true)
		std::cout << "char: impossible" << std::endl;
	else if ((this->_flag & FLAG_CHAR))
		std::cout << "char: " <<  this->_stringToConvert << std::endl;
	else
	{
		long int decimal = std::atol(this->_stringToConvert.c_str());
		if (decimal > 32 && decimal < 128)
		{
			std::cout << "char: " << static_cast<char>(decimal)<< std::endl;
		}
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}

void convert::toInt()
{
	if (this->isInfinity() == true)
		std::cout << "int: impossible" << std::endl;
	else if ((this->_flag & FLAG_CHAR))
	{
		std::cout << "Int: " << static_cast<int>(this->_stringToConvert[0]) << std::endl;
	}
	else
	{
		long long value = std::atol(this->_stringToConvert.c_str());
		if (value <= INT_MAX && value >= INT_MIN)
			std::cout << "int: " << static_cast<int>(value) << std::endl;
		else
			std::cout << "int : Overflow" << std::endl;
	}
}

void convert::toFloat()
{
	if (this->isInfinity() == true)
		this->specialFloat();
	else if ((this->_flag & FLAG_FLOAT))
		std::cout << "float: " << this->_stringToConvert << std::endl;
	else if ((this->_flag & FLAG_CHAR))
		std::cout << "float: " << static_cast<int>(this->_stringToConvert[0]) << ".0f" << std::endl;
	else if ((this->_flag & FLAG_POINT))
		std::cout << "float: " << this->_stringToConvert << "f" << std::endl;
	else
	{
       	long double value = std::atof(this->_stringToConvert.c_str());
		if (value <= std::numeric_limits<float>::max()  )
			std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		else
			std::cout << "float: Overflow" << std::endl;
	}
}

void convert::toDouble()
{
	if (this->isInfinity() == true)
		this->speacialDouble();
	else if ((this->_flag & FLAG_POINT) && !(this->_flag & FLAG_FLOAT))
		std::cout << "double: " << this->_stringToConvert << std::endl;
	else if ((this->_flag & FLAG_CHAR))
		std::cout << "double: " << static_cast<int>(this->_stringToConvert[0]) << ".0" << std::endl;
	else if ((this->_flag & FLAG_FLOAT))
	{
		int i = this->_stringToConvert.length();
		this->_stringToConvert[i - 1] = '\0';
		std::cout << "double: " << this->_stringToConvert <<  std::endl;
	}
	else
	{
		long double value = std::atof(this->_stringToConvert.c_str());
		if (value <= std::numeric_limits<double>::max())
			std::cout << "double: " << static_cast<double>(value) << ".O"<< std::endl;
		else
			std::cout << "double: Overflow" << std::endl;
	}
}

void convert::printConvert()
{
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

bool	convert::isInfinity()
{
	bool status = false;
	if (this->_stringToConvert == "-inf" | this->_stringToConvert == "-inff")
		status = true;
	else if (this->_stringToConvert == "+inf" || this->_stringToConvert == "+inff")
		status = true;
	else if (this->_stringToConvert == "nan" || this->_stringToConvert == "nanf")
		status = true;
	return (status);
}

void convert::specialFloat()
{
	if (this->_stringToConvert == "nanf")
		std::cout << "float : 0f" << std::endl;
	else if (this->_stringToConvert == "nan")
		std::cout << "float : nanf" << std::endl;
	else if (this->_stringToConvert == "-inf")
		std::cout << "float : -inff" << std::endl;
	else if (this->_stringToConvert == "+inf")
		std::cout << "float : inff" << std::endl;
}

void convert::speacialDouble()
{
	if (this->_stringToConvert == "nanf")
		std::cout << "double : 0" << std::endl;
	else if (this->_stringToConvert == "nan")
		std::cout << "double : nan" << std::endl;
	else if (this->_stringToConvert == "-inf")
		std::cout << "double : -inf" << std::endl;
	else if (this->_stringToConvert == "+inf")
		std::cout << "double : inf" << std::endl;
}
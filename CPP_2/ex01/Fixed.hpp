/* **************************************************************************** */
/*                                                                      .       */
/*   Fixed.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/12/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_2_FIXED_HPP
#define CPP_2_FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed{
private:
	int _fixedPointValue;
	static const int _fractionlBits = 8;

public:
	Fixed();
	Fixed(const int integerNumber);
	Fixed(const float floatNumber);
	~Fixed();
	Fixed(const Fixed &copyFixed);
	void operator=(const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	void operator<<(struct x);
};


#endif

/* **************************************************************************** */
/*                                                                      .       */
/*   Fixed.cpp.cc                                                        / V\     */
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


#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int integerNumber){
	std::cout << "Int constructor called" << std::endl;
	setRawBits(integerNumber << this->_fractionlBits); // power in 2
}

Fixed::Fixed(const float floatNumber){
	std::cout << "Float constructor called" << std::endl;
	setRawBits(floatNumber * (float)(1 << this->_fractionlBits)); // multiply 2
}

Fixed::Fixed(const Fixed &copyFixed){
	std::cout << "Copy constructor called" << std::endl;
	operator=(copyFixed);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(const int raw){
	this->_fixedPointValue = raw;
}

int Fixed::toInt(void) const{
	int fixedToInt;
	fixedToInt = this->getRawBits() >> this->_fractionlBits;
	return fixedToInt;
}

float Fixed::toFloat(void) const{
	float fixedToFloat;
	fixedToFloat = this->getRawBits() / (float)(1 << this->_fractionlBits);
	return fixedToFloat;
}


void Fixed::operator=(const Fixed &fixed){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return out;
}


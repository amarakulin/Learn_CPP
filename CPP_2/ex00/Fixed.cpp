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

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

void Fixed::operator=(const Fixed &fixed){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const Fixed &copyFixed){
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = copyFixed.getRawBits();
}

double Fixed::DoubleToFixed(double nbr){
	return (nbr * (double)(1  << this->_fractionlBits));//multiply to 2
}

double Fixed::FixedToDouble(double nbr){
	return (nbr / (double)(1  << this->_fractionlBits));
}

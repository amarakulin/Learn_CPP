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
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &copyFixed){
}

void Fixed::operator=(const Fixed &fixed){
	this->_fixedPointValue = fixed._fixedPointValue;
}

Fixed::~Fixed()= default;

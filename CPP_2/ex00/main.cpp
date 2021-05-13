/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/13/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
//	int aa, bb, cc;
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

//	aa = a.DoubleToFixed(5.5);
//	bb = b.DoubleToFixed(5.6);
//	cc = c.DoubleToFixed(5.7);
//	std::cout << a.FixedToDouble(aa) << std::endl;
//	std::cout << b.FixedToDouble(bb) << std::endl;
//	std::cout << c.FixedToDouble(cc) << std::endl;
//	std::cout << c.FixedToDouble(cc) + b.FixedToDouble(bb)<< std::endl;
	return 0;
}

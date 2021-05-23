/* **************************************************************************** */
/*                                                                      .       */
/*   span.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/23/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_8_SPAN_HPP
#define CPP_8_SPAN_HPP

#include <algorithm>
#include <vector>
#include <iostream>

class span{
public:
	span(const unsigned int n);
	span(span const &copy);
	span& operator=(const span &assign);
	~span();

private:
	span();
	std::vector<int> _intCollection;
};


#endif

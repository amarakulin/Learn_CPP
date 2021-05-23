/* **************************************************************************** */
/*                                                                      .       */
/*   span.cpp.cc                                                        / V\     */
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


#include "span.hpp"

span::span(const unsigned int n){
	_intCollection.reserve(n);
}

span::span(const span &copy){
	operator=(copy);
}

span &span::operator=(const span &assign){
	if (this != &assign){
		_intCollection.clear();
		_intCollection.assign(assign._intCollection.begin(), assign._intCollection.end());
	}
	return *this;
}

span::~span(){

}

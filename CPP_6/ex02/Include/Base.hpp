/* **************************************************************************** */
/*                                                                      .       */
/*   Base.hpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/21/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_6_BASE_HPP
#define CPP_6_BASE_HPP

#include <iostream>

#define NUMBER_FUNCTIONS 3

class Base{
public:
	virtual ~Base();

};

typedef struct createObj{
	Base*		(*getObj)();
}				t_createObj;



#endif

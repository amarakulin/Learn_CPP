/* **************************************************************************** */
/*                                                                      .       */
/*   MutantStack.hpp                                                   / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/24/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_8_MUTANTSTACK_HPP
#define CPP_8_MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
#include <iterator>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	iterator begin(){
		return (std::begin(this->c));
	}

	iterator end(){
		return (std::end(this->c));
	}


	MutantStack(){

	}

	MutantStack(MutantStack const &copy){
		operator=(copy);
	}

	MutantStack& operator=(const MutantStack &assign){
		if (this != &assign){
			static_cast <std::stack<T, Container> > (this) = static_cast <std::stack<T, Container> > (assign);
		}
		return *this;
	}

	~MutantStack(){

	}
};



#endif
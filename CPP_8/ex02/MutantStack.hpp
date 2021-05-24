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

//template <typename T>
//class iterator : public std::iterator<std::bidirectional_iterator_tag, T>{
//public:
//	void test(){}
//
//	iterator begin(){
//		return ;
//	}
//	iterator end(){
//		return ;
//	}
//};

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	iterator &begin(){
		return (iterator(this->c[0]));
	}

	iterator &end(){
		return (iterator(this->c[static_cast <int> (this->size())]));
	}





	MutantStack()
	{

	}

	MutantStack(MutantStack const &copy)
	{

	}

	MutantStack& operator=(const MutantStack &assign)
	{
		return ;
	}

	~MutantStack()
	{

	}
};



#endif
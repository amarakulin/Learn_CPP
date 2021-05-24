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
#include <stack>

template <class T>
class MutantStack : public std::stack<typename T::value_type, T>{
public:
	MutantStack();
	MutantStack(MutantStack const &copy);
	MutantStack& operator=(const MutantStack &assign);
	~MutantStack();

};

template<class T>
MutantStack<T>::MutantStack(){

}

template<class T>
MutantStack<T>::MutantStack(const MutantStack &copy){

}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &assign){
	return ;
}

template<class T>
MutantStack<T>::~MutantStack(){

}


#endif
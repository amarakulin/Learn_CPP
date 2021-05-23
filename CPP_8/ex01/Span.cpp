/* **************************************************************************** */
/*                                                                      .       */
/*   Span.cpp                                                          / V\     */
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


#include "Span.hpp"

Span::Span(const unsigned int n){
	_intCollection.reserve(n);
	_size = static_cast <unsigned long> (n);
}

Span::Span(const Span &copy){
	operator=(copy);
}

Span &Span::operator=(const Span &assign){
	if (this != &assign){
		_intCollection.clear();
		_intCollection.assign(assign._intCollection.begin(), assign._intCollection.end());
	}
	return *this;
}

Span::~Span(){

}

void Span::addNumber(int nbr){
	if (_intCollection.size() >= _size){
		throw FullCollectionOfNumberException();
	}
	_intCollection.push_back(nbr);
}

int Span::shortestSpan(){
	if (_intCollection.size() <= 1){
		throw NoSpanToFind();
	}
	return 1;
}

int Span::longestSpan(){
	if (_intCollection.size() <= 1){
		throw NoSpanToFind();
	}
	return *std::max_element(_intCollection.begin(),_intCollection.end())
			- *std::min_element(_intCollection.begin(),_intCollection.end());
}

const char *Span::FullCollectionOfNumberException::what() const throw(){
	return "[-]Error: Collection is full";
}

const char *Span::NoSpanToFind::what() const throw(){
	return "[-]Error: There is no Span to find";
}

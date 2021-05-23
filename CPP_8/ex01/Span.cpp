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
	int result;
	int cur;
	int prev;
	if (_intCollection.size() <= 1){
		throw NoSpanToFind();
	}
	std::sort(_intCollection.begin(), _intCollection.end());
	cur = _intCollection[1];
	prev = _intCollection[0];
	result = std::abs(cur - prev);
	for (unsigned long i = 1; i < _intCollection.size(); i++){
		cur = _intCollection[i];
		if (result > std::abs(cur - prev)){
			result = std::abs(cur - prev);
		}
		prev = _intCollection[i];
	}
	return result;
}

int Span::longestSpan(){
	if (_intCollection.size() <= 1){
		throw NoSpanToFind();
	}
	return *std::max_element(_intCollection.begin(),_intCollection.end())
			- *std::min_element(_intCollection.begin(),_intCollection.end());
}

void Span::addRundomNumbers(unsigned int size){
	int arrNumbers[size];
	if (size > _size){
		throw OutOfSizeException();
	}
	for (unsigned int i = 0; i < size; i++){
		arrNumbers[i] = rand() % size;
	}
	_intCollection.insert(_intCollection.end(), arrNumbers, arrNumbers + size);
}

void Span::printCollection(){
	for (unsigned long i = 0; i < _intCollection.size(); i++){
		std::cout << _intCollection[i] << " ";
	}
	std::cout << "" << std::endl;
}

const char *Span::FullCollectionOfNumberException::what() const throw(){
	return "[-]Error: Collection is full";
}

const char *Span::NoSpanToFind::what() const throw(){
	return "[-]Error: There is no Span to find";
}

const char *Span::OutOfSizeException::what() const throw(){
	return "[-]Error: The size is bigger then size of the collection";
}

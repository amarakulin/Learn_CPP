/* **************************************************************************** */
/*                                                                      .       */
/*   Span.hpp                                                          / V\     */
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
#include <span>

class Span{
public:
	Span(const unsigned int n);
	Span(Span const &copy);
	Span& operator=(const Span &assign);
	~Span();
	void addNumber(int nbr);
	void addRundomNumbers(unsigned int size);
	void printCollection();
	int shortestSpan();
	int longestSpan();

	class FullCollectionOfNumberException : public std::exception{
		const char *what() const throw();
	};

	class NoSpanToFind : public std::exception{
		const char *what() const throw();
	};

	class OutOfSizeException : public std::exception{
		const char *what() const throw();
	};

private:
	Span();
	std::vector<int> _intCollection;
	unsigned long _size;
};


#endif

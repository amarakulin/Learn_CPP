/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
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

int main()
{
	std::srand(std::time(NULL));
	Span spSubj = Span(5);
	spSubj.addNumber(5);
	spSubj.addNumber(3);
	spSubj.addNumber(17);
	spSubj.addNumber(9);
	spSubj.addNumber(11);
	std::cout << spSubj.shortestSpan() << std::endl;
	std::cout << spSubj.longestSpan() << std::endl;
	
	std::cout << "============MY TESTS============" << std::endl;
	std::cout << "============NEGATIVE NUMBERS============" << std::endl;
	Span sp = Span(5);
	try{
		sp.addNumber(-5);
		sp.addNumber(3);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(-11);

		sp.addNumber(-11);
	}
	catch (std::exception &e){
		std::cout <<  e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "============CREATE RANDOM COLLECTION============" << std::endl;
	int size = 10;
	Span spTen = Span(size);
	try{
		spTen.addRundomNumbers(size);
		std::cout << spTen.shortestSpan() << std::endl;
		std::cout << spTen.longestSpan() << std::endl;
		spTen.printCollection();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "============CREATE BIG RANDOM COLLECTION============" << std::endl;
	int size1 = 10000;
	Span spBig = Span(size1);
	try{
		spBig.addRundomNumbers(size1);
		spBig.printCollection();
		std::cout << spBig.shortestSpan() << std::endl;
		std::cout << spBig.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "============CREATE EMPTY COLLECTION============" << std::endl;
	int size2 = 0;
	Span spEmpty = Span(size2);
	try{
		std::cout << spEmpty.shortestSpan() << std::endl;
		std::cout << spEmpty.longestSpan() << std::endl;
		spBig.printCollection();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "============CREATE SMALL COLLECTION============" << std::endl;
	int size3 = 1;
	Span spSmall = Span(size3);
	try{
		spSmall.addNumber(2);
		spSmall.printCollection();
		std::cout << spSmall.shortestSpan() << std::endl;
		std::cout << spSmall.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "============CREATE UNFILLED COLLECTION============" << std::endl;
	int size4 = 5;
	Span spUnfilled = Span(size4);
	try{
		spUnfilled.addRundomNumbers(6);
		spUnfilled.printCollection();
		std::cout << spUnfilled.shortestSpan() << std::endl;
		std::cout << spUnfilled.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
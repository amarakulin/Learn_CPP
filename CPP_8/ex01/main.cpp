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

	std::cout << "============CREATE BIG COLLECTION============" << std::endl;
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


	//TODO Проверки на exception  и создать большую структуру !!!
}
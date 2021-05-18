/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/18/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat Bob("Bob", -1);
	Bureaucrat Jim("Jim", 151);
	Bureaucrat Rob("Rob", 50);
	Bureaucrat Fred("Fred", 3);
	for (int i = 0; i < 99; i++){
		Rob.decrementGrage();
	}
	Fred.incrementGrage();
	Fred.incrementGrage();
	std::cout << Rob << std::endl;
	std::cout << Fred << std::endl;

	Fred.incrementGrage();
	Fred.incrementGrage();
	Rob.decrementGrage();
	Rob.decrementGrage();
	std::cout << Rob << std::endl;
	std::cout << Fred << std::endl;
	return (0);
}

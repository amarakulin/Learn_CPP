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
	Bureaucrat Rob("Rob", 7);
	Bureaucrat Fred("Fred", 3);
	Form form1("Form1", 5, 5);
	Form form2("Form2", -1, 151);
	Rob.signForm(&form1);
	Rob.incrementGrage();
	Rob.incrementGrage();
	Rob.signForm(&form1);
	Fred.signForm(&form2);
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	return (0);
}

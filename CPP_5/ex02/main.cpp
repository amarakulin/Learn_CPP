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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	Bureaucrat Rob("Rob", 26);
	Bureaucrat Fred("Fred", 72);
	Bureaucrat Nick("Nick", 145);
	Form *ppf = new PresidentialPardonForm("A");
	Form *rrf = new RobotomyRequestForm("B");
	Form *scf = new ShrubberyCreationForm("C");
	Rob.executeForm(*ppf);
	Rob.incrementGrage();
	Rob.signForm(ppf);
	Fred.signForm(rrf);
	Nick.signForm(scf);
	for (int i = 0; i < 27; i++){
		Rob.incrementGrage();
		Nick.incrementGrage();
		Fred.incrementGrage();
	}
	Rob.executeForm(*ppf);
	Fred.executeForm(*rrf);
	Nick.executeForm(*scf);

	delete ppf;
	delete rrf;
	delete scf;
	return (0);
}

/* **************************************************************************** */
/*                                                                      .       */
/*   ShrubberyCreationForm.hpp                                         / V\     */
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


#ifndef CPP_5_SHRUBBERYCREATIONFORM_HPP
#define CPP_5_SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : virtual public Form{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &assign);
	~ShrubberyCreationForm();

private:
	void createTree(std::string target);
	std::string getStringTree();
};


#endif

/* **************************************************************************** */
/*                                                                      .       */
/*   RobotomyRequestForm.hpp                                                        / V\     */
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


#ifndef CPP_5_ROBOTOMYREQUESTFORM_HPP
#define CPP_5_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : virtual public Form{
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &assign);
	~RobotomyRequestForm();

private:
	void getActionString(std::string target) const;
};


#endif

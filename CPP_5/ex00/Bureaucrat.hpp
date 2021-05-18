/* **************************************************************************** */
/*                                                                      .       */
/*   Bureaucrat.hpp                                                        / V\     */
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


#ifndef CPP_5_BUREAUCRAT_HPP
#define CPP_5_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(const std::string &name);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat& operator=(const Bureaucrat &assign);
	~Bureaucrat();

	int getGrade() const;
	const std::string &getName() const;

private:
	std::string _name;
	int _grade;
	const int _minGrade = 150;
	const int _maxGrade = 1;
};


#endif
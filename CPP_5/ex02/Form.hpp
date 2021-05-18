/* **************************************************************************** */
/*                                                                      .       */
/*   Form.hpp                                                        / V\     */
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


#pragma once

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

/*
** Abstruct
*/
class Form{
public:
	Form();
	Form(const std::string &name, int gradeSign, int gradeExecute);
	Form(Form const &copy);
	Form& operator=(const Form &assign);
	virtual ~Form();

	void beSigned(Bureaucrat *bureaucrat);
	class GradeTooHighException : public std::exception{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char *what() const throw();
	};

	const std::string &getName() const;
	int getGradeSign() const;
	int getGradeExecute() const;
	bool isSign() const;

	virtual void execute(Bureaucrat const & executor) const;

private:
	const std::string _name;
	const int _gradeSign;
	const int _gradeExecute;
	bool _sign;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

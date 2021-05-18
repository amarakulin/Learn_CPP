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


#ifndef CPP_5_FORM_HPP
#define CPP_5_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form{
public:
	Form();
	Form(const std::string &name, int gradeSign, int gradeExecute);
	Form(Form const &copy);
	Form& operator=(const Form &assign);
	~Form();

	void beSigned(Bureaucrat *bureaucrat);
	class GradeTooHighException : public std::exception{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char *what() const throw();
	};

	const std::string &getName() const;
	const int getGradeSign() const;
	const int getGradeExecute() const;
	bool isSign() const;

private:
	const std::string _name;
	const int _gradeSign;
	const int _gradeExecute;
	bool _sign;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif

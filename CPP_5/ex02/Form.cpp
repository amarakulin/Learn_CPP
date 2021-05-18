/* **************************************************************************** */
/*                                                                      .       */
/*   Form.cpp                                                        / V\     */
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


#include "Form.hpp"


Form::Form()
		: _name("No name"), _gradeSign(1), _gradeExecute(1){
	this->_sign = false;
}

Form::Form(const std::string &name, int gradeSign, int gradeExecute)
		: _name(name),
		_gradeSign(gradeSign),
		_gradeExecute(gradeExecute){
	try{
		if (gradeSign < MAX_GRADE || gradeExecute < MAX_GRADE){
			throw GradeTooHighException();
		}
		else if (gradeSign > MIN_GRADE || gradeExecute > MIN_GRADE){
			throw GradeTooLowException();
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	this->_sign = false;
}

Form::Form(const Form &copy)
		: _name(copy.getName()),
		  _gradeSign(copy._gradeSign),
		  _gradeExecute(copy._gradeExecute),
		  _sign(copy.isSign())
{
	operator=(copy);
}

Form &Form::operator=(const Form &assign){
	if (this != &assign){
		this->_sign = assign._sign;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &form){
	std::string sign;
	if (form.isSign()){
		sign = "has";
	}
	else{
		sign = "hasn't";
	}
	out << "Form " + form.getName() << " " << sign <<  " been signed";
	return out;
}

Form::~Form(){
}

void Form::beSigned(Bureaucrat *bureaucrat){
	try{
		if (bureaucrat->getGrade() <= this->_gradeSign){
			this->_sign = true;
		}
		else{
			throw GradeTooLowException();
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw(){
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "Grade too low";
}

const std::string &Form::getName() const{
	return _name;
}

int Form::getGradeSign() const{
	return _gradeSign;
}

int Form::getGradeExecute() const{
	return _gradeExecute;
}

bool Form::isSign() const{
	return _sign;
}

void Form::execute(const Bureaucrat &executor) const{
	if (this->isSign() && this->_gradeExecute >= executor.getGrade()){
		executor.executeForm(*this);
	}
	else{
		throw Form::GradeTooLowException();
	}
}



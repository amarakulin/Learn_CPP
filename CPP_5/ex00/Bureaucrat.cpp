/* **************************************************************************** */
/*                                                                      .       */
/*   Bureaucrat.cpp                                                        / V\     */
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

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name){
	try {
		if(grade < this->_maxGrade){
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > this->_minGrade){
			throw Bureaucrat::GradeTooLowException();
		}
		this->_grade = grade;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	operator=(copy);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign){
	if (this != &assign){
		this->_grade = assign.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){

}

int Bureaucrat::getGrade() const{
	return _grade;
}

const std::string &Bureaucrat::getName() const{
	return _name;
}

void Bureaucrat::incrementGrage(){
	try{
		if (this->_grade - 1 < _maxGrade){
			throw Bureaucrat::GradeTooHighException();
		}
		this->_grade -= 1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrage(){
	try{
		if (this->_grade + 1 > _minGrade){
			throw Bureaucrat::GradeTooLowException();
		}
		this->_grade += 1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
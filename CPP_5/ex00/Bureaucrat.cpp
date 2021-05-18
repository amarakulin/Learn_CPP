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
	this->_name = "No _name";
	this->_grade = _minGrade;
}

Bureaucrat::Bureaucrat(const std::string &name){
	this->_name = name;
	this->_grade = _minGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	operator=(copy);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign){
	if (this != &assign){
		this->_name = assign.getName();
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

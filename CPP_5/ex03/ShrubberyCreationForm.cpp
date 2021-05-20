/* **************************************************************************** */
/*                                                                      .       */
/*   ShrubberyCreationForm.cpp                                         / V\     */
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


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(target, 145, 137){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
	operator=(copy);
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){
	(void)assign;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

std::string ShrubberyCreationForm::getStringTree() const{
	std::string tree = "       &&& &&  & &&\n"
					   "  && &\\/&\\|& ()|/ @, &&\n"
					   "  &\\/(/&/&||/& /_/)_&/_&\n"
					   "&() &\\/&|()|/&\\/ '%\" & ()\n"
					   "&_\\_&&_\\ |& |&&/&__%_/_& &&\n"
					   "&&   && & &| &| /& & % ()& /&&\n"
					   "()&_---()&\\&\\|&&-&&--%---()~\n"
					   "   &&     \\|||\n"
					   "            |||\n"
					   "            |||\n"
					   "            |||\n"
					   "       , -=-~  .-^- _";
	return tree;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
	Form::execute(executor);
	std::string nameFile = this->getName() + "_shrubbery";
	std::ofstream outfile (nameFile);
	outfile << getStringTree() << std::endl;
	outfile.close();
}
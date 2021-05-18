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
	createTree(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
	operator=(copy);
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

void ShrubberyCreationForm::createTree(std::string target){
	std::string nameFile = target + "_shrubbery";
	std::ofstream outfile (nameFile);
	outfile << getStringTree() << std::endl;
	outfile.close();
}

std::string ShrubberyCreationForm::getStringTree(){
	std::string tree = "&&& &&  & &&\n"
			      "&& &\\/&\\|& ()|/ @, &&\n"
			      "&\\/(/&/&||/& /_/)_&/_&\n"
			   "&() &\\/&|()|/&\\/ '%\" & ()\n"
			   "&_\\_&&_\\ |& |&&/&__%_/_& &&\n"
			   "&&   && & &| &| /& & % ()& /&&\n"
			 "()&_---()&\\&\\|&&-&&--%---()~\n"
			     "&&     \\|||\n"
				         "|||\n"
			             "|||\n"
			             "|||\n"
			        " , -=-~  .-^- _";
	return tree;
}

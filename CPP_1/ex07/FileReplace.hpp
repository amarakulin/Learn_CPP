/* **************************************************************************** */
/*                                                                      .       */
/*   FileReplace.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/12/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_1_FILEREPLACE_HPP
#define CPP_1_FILEREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"                 /* Green */
#define BLUE    "\033[34m"                 /* Blue */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */

class FileReplace{
public:


	void printError(const std::string& valueArg,const std::string& errorMessage);
	void replaceStringInFile(std::string nameSrcFile, std::string from, std::string to);

private:
	void replaceAll(std::string &srcStr, std::string from, std::string to);
};


#endif

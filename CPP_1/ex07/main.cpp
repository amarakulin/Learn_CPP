/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
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

#include "FileReplace.hpp"

int main(int argc, char *argv[]){
	FileReplace fileReplace;
	if (argc != 4){
		fileReplace.printError("","Wrong number of arguments");
		return (1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::string nameSrcFile = argv[1];
	fileReplace.replaceStringInFile(nameSrcFile, s1, s2);
	return (0);
}

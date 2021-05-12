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
	if (argc != 2){
		fileReplace.printError("","Wrong number of arguments");
		return (1);
	}
	std::string nameSrcFile = argv[1];
	std::string nameDstFile = nameSrcFile + ".replace";

	std::ifstream srcFile (nameSrcFile);
	if (!srcFile.is_open()){
		fileReplace.printError(nameSrcFile,"can't open the file");
		return (1);
	}

	std::ofstream dstFile (nameDstFile);
	if (!dstFile.is_open()){
		fileReplace.printError(nameDstFile,"can't open the file");
		return (1);
	}

	std::string line;
	while(!srcFile.eof()){
		std::getline(srcFile, line, '\n');
		dstFile << line;
	}
	dstFile << std::endl;
	srcFile.close();
	dstFile.close();
	return (0);
}

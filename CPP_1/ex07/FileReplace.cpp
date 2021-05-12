/* **************************************************************************** */
/*                                                                      .       */
/*   FileReplace.cpp.cc                                                        / V\     */
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

void FileReplace::printError(const std::string& valueArg, const std::string& errorMessage){
	if (valueArg.empty()){
		std::cerr << BOLDRED "[-]Error: " RESET + errorMessage;
	}
	else{
		std::cerr << BOLDRED "[-]Error: " RESET  "' " + valueArg + "' " + errorMessage;
	}
	std::cout << std::endl;
}

void FileReplace::replaceAll(std::string &srcStr, std::string from, std::string to){
	if (from.empty())
		return;
	int startPosition = 0;
	while((startPosition = srcStr.find(from, startPosition)) != std::string::npos){
			srcStr.replace(startPosition, from.length(), to);
			startPosition += to.length();
	}
}

void FileReplace::replaceStringInFile(std::string nameSrcFile, std::string from, std::string to){
	std::string nameDstFile = nameSrcFile + ".replace";

	std::ifstream srcFile (nameSrcFile);
	if (!srcFile.is_open()){
		printError(nameSrcFile,"can't open the file");
		srcFile.close();
		return ;
	}

	std::ofstream dstFile (nameDstFile);
	if (!dstFile.is_open()){
		printError(nameDstFile,"can't open the file");
		dstFile.close();
		return ;
	}

	std::string line;
	while(!srcFile.eof()){
		std::getline(srcFile, line, '\n');
		if (srcFile.fail() && !srcFile.eof()){
			printError("", "Some error in gnl");
			break;
		}
		replaceAll(line, from, to);
		dstFile << line;
	}
	dstFile << std::endl;
	srcFile.close();
	dstFile.close();
}

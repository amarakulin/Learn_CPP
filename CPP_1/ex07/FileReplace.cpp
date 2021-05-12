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
}

//std::string FileReplace::makeCopyFile(std::string filename){
//	const std::string& srcFile = filename;
//	std::string dstFile = srcFile + ".replace";
//	std::ifstream  src(srcFile, std::ios::binary);
//	std::ofstream  dst(dstFile,   std::ios::binary);
//	dst << src.rdbuf();
//	return dstFile;
//}

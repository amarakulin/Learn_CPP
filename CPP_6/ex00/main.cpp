/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/19/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "Include/scalarConvertion.hpp"

bool isValidArg(char *arg){
	int i = 0;
	std::string strArg = arg;
	if (strArg == "nan" || strArg == "inf" || strArg == "-inf" || strArg == "+inf" ||
		strArg == "nanf" || strArg == "inff" || strArg == "-inff" || strArg == "+inff")
		return true;
	if(strArg[i] == '+' || strArg[i] == '-'){
		i++;
	}
	if(isdigit(strArg[i])){
		return true;
	}
	else{
		return false;
	}
}

void printCharStr(double dl){
	std::string output;
	int integer = static_cast <int> (dl);

	std::cout << "char: ";
	if(std::isprint(integer)){
		output = "'";
		output += integer;
		output += "'";
	}
	else if (!isascii(integer)) {
		output = "impossible";
	}
	else{
		output = "Non displayable";
	}
	std::cout << output << std::endl;
}

void printIntStr(double dl){
	int integer = static_cast <int> (dl);
	std::cout << "int: ";
	if (dl >= 2147483648.0 || dl <= -2147483649.0 || dl != dl){
		std::cout << "impossible";
	}
	else{
		std::cout << integer;
	}
	std::cout << std::endl;
}

void printFloatStr(double dl){
	std::string output;
	float fl = static_cast <float> (dl);
	std::cout << "float: ";
	if ((fl - static_cast <int> (dl) == 0)){
		std::cout << fl << ".0";
	}
	else{
		std::cout << fl;
	}
	std::cout << "f" << std::endl;
}

void printDoubleStr(double dl){

	std::cout << "double: ";
	if ((dl - static_cast <int> (dl)) == 0){
		std::cout << dl << ".0";
	}
	else{
		std::cout << dl;
	}
	std::cout << std::endl;
}

void scalarConvertion(char* arg){
	double dl;
	std::string::size_type sz;
	if (isValidArg(arg)){
		dl = std::stod(arg, &sz);
	}
	else{
		std::cout << "Wrong arg" << std::endl;
		return;
	}
	printCharStr(dl);
	printIntStr(dl);
	printFloatStr(dl);
	printDoubleStr(dl);
}

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Wrong number arguments!" << std::endl;
		return (1);
	}
	scalarConvertion(argv[1]);
	return (0);
}
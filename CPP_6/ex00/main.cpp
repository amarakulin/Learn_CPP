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

std::string getCharStr(double dl){
	char ch;
	std::string output;
	int integer = static_cast <int> (dl);
	if(std::isprint(integer)){
		ch = static_cast <char> (integer);
		output = "'" + std::to_string(ch) + "'";
	}
	else{
		output = "Non displayable";
	}
	return output;
}

std::string getIntStr(double dl){
	int integer = static_cast <int> (dl);
	return std::to_string(integer);
}

std::string getFloatStr(double dl){
	float fl = static_cast <float> (dl);
	return std::to_string(fl);
}

std::string getDoubleStr(double dl){
	return std::to_string(dl);
}

void scalarConvertion(char* arg){
	double dl;
	std::string str (arg);
	std::string::size_type sz;
	dl = std::stod(arg, &sz);
	std::cout << "char: " << getCharStr(dl) << std::endl;
	std::cout << "int: " << getIntStr(dl) << std::endl;
	std::cout << "float: " << getFloatStr(dl) << "f" << std::endl;
	std::cout << "double: " << getDoubleStr(dl) << std::endl;

}

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Wrong number arguments!" << std::endl;
		return (1);
	}
	scalarConvertion(argv[1]);
	return (0);
}
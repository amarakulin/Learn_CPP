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

void scalarConvertion(char* arg){
	double dl;
	std::string str (arg);
	std::string::size_type sz;
	dl = std::stod(arg, &sz);
	float fl = static_cast <float> (dl);
	int integer = static_cast <int> (dl);
	std::cout << "int: " << integer << std::endl;
	std::cout << "float: " << fl << std::endl;
	std::cout << "double: " << dl << std::endl;

}

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Wrong number arguments!" << std::endl;
		return (1);
	}
	scalarConvertion(argv[1]);
	return (0);
}
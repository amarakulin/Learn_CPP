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


#include "scalarConvertion.hpp"

void scalarConvertion(char **argv){

}

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Wrong number arguments!" << std::endl;
		return (1);
	}
	scalarConvertion(argv);
	return (0);
}
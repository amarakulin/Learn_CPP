/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/22/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include "Include/Array.hpp"

int main(){

	Array<int> *intArray = new Array<int>(10);
	Array<double> *doubleArray = new Array<double>(10);

	for (int i = 0; i < intArray->size(); ++i){
		(*intArray)[i] = i;
		(*doubleArray)[i] = i + 0.5;
	}

	for (int i = 0; i < intArray->size(); ++i){
		std::cout << (*intArray)[i] << "\t" << (*doubleArray)[i] << '\n';
	}

	int idx = 90;
	try{
		std::cout << (*intArray)[idx] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "[-] Error: " << idx << " " << e.what() << std::endl;
	}
	return (0);
}

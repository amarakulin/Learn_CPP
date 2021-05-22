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

//	Array<int> *a = new Array<int>();
//	Array<int> *aa = new Array<int>(5);
//	std::cout << a->size() << std::endl;
//	std::cout << a[0] << std::endl;
//	std::cout << aa->size() << std::endl;
//	std::cout << aa[2] << std::endl;
//	std::cout << aa[9] << std::endl;

	Array<int> *intArray = new Array<int>(10);
	Array<double> *doubleArray = new Array<double>(10);
//	int* a  = new int[10]
	for (int i = 0; i < intArray->size(); ++i)
	{
		intArray[i] = i;
		doubleArray[i] = i + 0.5;
	}

//	for (int i = intArray->size()-1; i >= 0; --i)
//		std::cout << intArray[i] << "\t" << doubleArray[i] << '\n';
	return (0);
}

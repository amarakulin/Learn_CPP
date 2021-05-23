/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/23/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include "easyfind.h"

template <typename T, typename V>
void testEasyFind(T container, V value){
	try {
		std::cout << *easyfind(container, value) << std::endl;
	}
	catch (std::exception&e){
		std::cout << value << " " << e.what() << std::endl;
	}
}

int main(){

	std::vector<int> intVector ;
	std::vector<char> charVector ;
	std::vector<float> floatVector ;
	std::vector<std::string> strVector ;



	std::cout << "=================TEST INT VECTOR=================" << std::endl;
	intVector.push_back(10);
	intVector.push_back(20);
	intVector.push_back(30);
	testEasyFind(intVector, 11);
	testEasyFind(intVector, 10);
	testEasyFind(intVector, 20);
	testEasyFind(intVector, 40);

	std::cout << "=================TEST CHAR VECTOR=================" << std::endl;
	charVector.push_back('f');
	charVector.push_back('s');
	charVector.push_back('q');
	testEasyFind(charVector, 'f');
	testEasyFind(charVector, 'f');
	testEasyFind(charVector, 's');
	testEasyFind(charVector, 'r');

	return (0);
}

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

#include "easyfind.hpp"

template <typename T, typename V>
void testEasyFind(T container, V value){
	try {
		std::cout << *easyfind(container, value) << std::endl;
	}
	catch (std::exception&e){
		std::cout << "'"<< value << "' " << e.what() << std::endl;
	}
}

int main(){

	std::vector<int> intVector ;
	std::vector<char> charVector ;
	std::array<int, 6> intArray = {1, 2, 3, 4, 5, 6};
	std::list<int> intList;
	std::set<int> intSet;

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

	std::cout << "=================TEST INT ARRAY=================" << std::endl;
	testEasyFind(intArray, 1);
	testEasyFind(intArray, 5);
	testEasyFind(intArray, 8);
	testEasyFind(intArray, 2135);

	std::cout << "=================TEST INT LIST=================" << std::endl;
	intList.push_back(5);
	intList.push_back(6);
	intList.push_back(-235);
	intList.push_back(0);
	testEasyFind(intList, -235);
	testEasyFind(intList, 0);
	testEasyFind(intList, -32);
	testEasyFind(intList, 2135);

	std::cout << "=================TEST INT SET=================" << std::endl;
	intSet.insert(1);
	intSet.insert(5);
	intSet.insert(8);
	intSet.insert(2135);
	testEasyFind(intSet, 1);
	testEasyFind(intSet, 5);
	testEasyFind(intSet, 8);
	testEasyFind(intSet, 2135);

	return (0);
}

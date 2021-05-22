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

#include "Include/iter.hpp"

int multiply(int i){
	return i * 2;
}

int toUpper(int c){
	return std::toupper(c);
}

bool reverseBool(bool b){
	return !b;
}

int main(){

//	std::string arrString[] = {"fadsfasd" , "r123123r123r", "%^F&^I&I^G@", "R"};
	bool boolArr[4] = {true, true, false, false};
	int* intArr = new int[4];
	char charArr[12] = "Hello world";

	for (int i = 0; i < 4; i++){
		intArr[i] = i;
	}
	std::cout <<  std::endl << "=========INT ARR=========" << std::endl;
	printArr(intArr, 4);
	::iter(intArr, 4, multiply);
	printArr(intArr, 4);
	printArr(intArr, 4);
	::iter(intArr, 4, toUpper);
	printArr(intArr, 4);

	std::cout <<  std::endl << "=========CHAR ARR=========" << std::endl;
	printArr(charArr, 12);
	::iter(charArr, 12, toUpper);
	printArr(charArr, 12);
	printArr(charArr, 12);
	::iter(charArr, 12, reverseBool);
	printArr(charArr, 12);

	std::cout <<  std::endl << "=========BOOL ARR=========" << std::endl;
	printArr(boolArr, 4);
	::iter(boolArr, 4, reverseBool);
	printArr(boolArr, 4);
	printArr(boolArr, 4);
	::iter(boolArr, 4, multiply);
	printArr(boolArr, 4);

//	std::cout <<  std::endl << "=========Str ARR=========" << std::endl;
//	printArr(arrString, 4);
//	::iter(arrString, 4, toUpper);
//	printArr(arrString, 4);
//	printArr(arrString, 4);
//	::iter(arrString, 4, multiply);
//	printArr(arrString, 4);

	return (0);
}

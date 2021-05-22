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

int main(){

	int* intArr = new int[4];
	char charArr[12] = "Hello world";
	for (int i = 0; i < 4; i++){
		intArr[i] = i;
	}
	printArr(intArr, 4);
	::iter(intArr, 4, multiply);
	printArr(intArr, 4);
	printArr(charArr, 12);
	::iter(charArr, 12, toUpper);
	printArr(charArr, 12);
	return (0);
}

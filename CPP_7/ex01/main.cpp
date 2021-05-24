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

class A{
public:
	A(void): _n(42){}

	int getN() const{
		return _n;
	}

private:
	int _n;
};

std::ostream &operator<<(std::ostream &os, const A &a)
{
	os << "_n: " << a.getN();
	return os;
}

void checkFloat(const float &i){
	std::cout << "Float func - " << i << std::endl;
}

void checkInt(const int &i){
	std::cout << "Int func - " << i << std::endl;
}

void checkChar(const char &c){
	std::cout << "Char func - " << c << std::endl;
}

void checkBool(const bool &b){
	std::cout << "Bool func - " << b << std::endl;
}

void checkStr(const std::string &s){
	std::cout << s  << std::endl;
}

int main(){

	std::string arrString[] = {"fadsfasd" , "r123123r123r", "%^F&^I&I^G@", "R"};
	bool boolArr[4] = {true, true, false, false};
	int* intArr = new int[4];
	float floatArr[] = {.124, 235.15, 321523, 8.0};
	char charArr[12] = "Hello world";

	for (int i = 0; i < 4; i++){
		intArr[i] = i;
	}
	std::cout <<  std::endl << "=========INT ARR=========" << std::endl;
	printArr(intArr, 4);
	iter(intArr, 4, checkInt);

	std::cout <<  std::endl << "=========FLOAT ARR=========" << std::endl;
	printArr(floatArr, 4);
	iter(floatArr, 4, checkFloat);

	std::cout <<  std::endl << "=========CHAR ARR=========" << std::endl;
	printArr(charArr, 12);
	iter(charArr, 12, checkChar);

	std::cout <<  std::endl << "=========BOOL ARR=========" << std::endl;
	printArr(boolArr, 4);
	iter(boolArr, 4, checkBool);

	std::cout <<  std::endl << "=========Str ARR=========" << std::endl;
	printArr(arrString, 4);
	iter(arrString, 4, checkStr);

	std::cout <<  std::endl << "=========A ARR=========" << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	A tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);

	delete[] intArr;

	return (0);
}

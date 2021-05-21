/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/20/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include "Include/SerializationHeader.hpp"

static const std::string arrStr[] = {"First", "Second", "Third", "Four", "Five"};

void* serialize(void){
	int randIdx = rand() % 5;
	Data *newData = new Data();
	newData->str1 = arrStr[randIdx];
	newData->str2 = arrStr[randIdx];
	newData->integer = randIdx;
	return newData;
}

Data* deserialize(void* raw){
	return static_cast <Data *> (raw);
}

int main(){
	std::srand(std::time(NULL));
	void* dataSerialize1 = serialize();
	void* dataSerialize2 = serialize();
	void* dataSerialize3 = serialize();

	Data* data1 = deserialize(dataSerialize1);
	Data* data2 = deserialize(dataSerialize2);
	Data* data3 = deserialize(dataSerialize3);

	std::cout << data1->str1 << "|" << data1->str2 << "|" << data1->integer << std::endl;
	std::cout << data2->str1 << "|" << data2->str2 << "|" << data2->integer << std::endl;
	std::cout << data3->str1 << "|" << data3->str2 << "|" << data3->integer << std::endl;

	delete data1;
	delete data2;
	delete data3;
	return (0);
}
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
	std::srand(std::time(NULL));
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
	void* dataSerialize1 = serialize();
	Data* data1 = deserialize(dataSerialize1);
	std::cout << data1->str1 << "|" << data1->str2 << "|" << data1->integer << std::endl;
	delete data1;
	return (0);
}
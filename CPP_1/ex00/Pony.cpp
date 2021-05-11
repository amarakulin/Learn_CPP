/* **************************************************************************** */
/*                                                                      .       */
/*   Pony.cpp                                                          / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/11/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "Pony.hpp"

int Pony::getAge() const{
	return age;
}

void Pony::setAge(int age){
	Pony::age = age;
}

const std::string &Pony::getName() const{
	return name;
}

void Pony::setName(const std::string &name){
	Pony::name = name;
}

void Pony::lifeCyclePony(Pony *Pony){
	std::cout << Pony->getName() + " Hello heap world!\n";
	std::cout << Pony->getName() + " is " + std::to_string(Pony->getAge()) + " age old\n";
	std::cout << Pony->getName() + "is cleaning from heap!\n";
}

void Pony::ponyOnTheHeap(){
	Pony* heapPony = new Pony();
	heapPony->setAge(15);
	heapPony->setName("HeapPony");
	lifeCyclePony(heapPony);
	delete heapPony;
}

void Pony::ponyOnTheStack(){
	Pony stackPony[1];
	stackPony->setAge(20);
	stackPony->setName("StackPony");
	lifeCyclePony(stackPony);
}


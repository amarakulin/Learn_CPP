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

#include "Include/Base.hpp"
#include "Include/A.hpp"
#include "Include/B.hpp"
#include "Include/C.hpp"



static Base *getA(){
	return (new A());
}

static Base *getB(){
	return (new B());
}

static Base *getC(){
	return (new C());
}

const t_createObj arrCreateObj[NUMBER_FUNCTIONS] = {
		{.getObj = getA},
		{.getObj = getB},
		{.getObj = getC}
};



static void identify_from_pointer(Base * p){
	A *objA = dynamic_cast <A*> (p);
	B *objB = dynamic_cast <B*> (p);
	C *objC = dynamic_cast <C*> (p);

	if (objA){
		std::cout << objA->getName() << std::endl;
	}
	else if (objB){
		std::cout << objB->getName() << std::endl;
	}
	else if (objC){
		std::cout << objC->getName() << std::endl;
	}
}

void identify_from_reference( Base & p){
	try{
		A &objA = dynamic_cast <A&> (p);
		std::cout << objA.getName() << std::endl;
		return;
	}
	catch (std::exception &e){}

	try{
		B &objB = dynamic_cast <B&> (p);
		std::cout << objB.getName() << std::endl;
		return;
	}
	catch (std::exception &e){}

	try{
		C &objC = dynamic_cast <C&> (p);
		std::cout << objC.getName() << std::endl;
		return;
	}
	catch (std::exception &e){}
}


Base* generate(void){
	int randIdx = rand() % NUMBER_FUNCTIONS;
	return (arrCreateObj[randIdx].getObj());
}

int main(){
	std::srand(std::time(NULL));
	Base *basePointer1 = generate();
	Base *basePointer2 = generate();
	Base *basePointer3 = generate();
	identify_from_pointer(basePointer1);
	identify_from_pointer(basePointer2);
	identify_from_pointer(basePointer3);

	Base &baseRef1 = *generate();
	Base &baseRef2 = *generate();
	identify_from_reference(baseRef1);
	identify_from_reference(baseRef2);

	delete basePointer1;
	delete basePointer2;
	delete basePointer3;
	return 0;
}
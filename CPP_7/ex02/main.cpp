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

class A{
public:
	char ch;

	A(){
		ch = '*';
	}

	A(char ch){
		this->ch = ch;
	}

	virtual ~A(){

	}
};

int main(){
	Array<std::string> *emptyStrArray = new Array<std::string>();
	Array<std::string> *strArray = new Array<std::string>(10);
	Array<A> *AArray = new Array<A>(10);
	Array<int> *intArray = new Array<int>(10);
	Array<double> *doubleArray = new Array<double>(10);

	for (int i = 0; i < intArray->size(); ++i){
		std::cout << (*intArray)[i] << "\t" << (*doubleArray)[i] << "\t" << (*strArray)[i] << "\t" << (*AArray)[i].ch << '\n';
	}

	for (int i = 0; i < intArray->size(); ++i){
		(*intArray)[i] = i;
		(*doubleArray)[i] = i + 0.5;
		(*strArray)[i] = std::to_string(i + 100);
		(*AArray)[i] = i + 65;
	}

	for (int i = 0; i < intArray->size(); ++i){
		std::cout << (*intArray)[i] << "\t" << (*doubleArray)[i] << "\t" << (*strArray)[i] << "\t" << (*AArray)[i].ch << '\n';
	}

	int idx = 90;
	try{
		std::cout << (*intArray)[idx] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "[-] Error: " << idx << " " << e.what() << std::endl;
	}
	idx = 0;
	try{
		(*emptyStrArray)[idx]  = "Will be error";
	}
	catch (std::exception &e){
		std::cout << "[-] Error: " << idx << " " << e.what() << std::endl;
	}

	delete strArray;
	delete AArray;
	delete intArray;
	delete doubleArray;
	delete emptyStrArray;

	return (0);
}

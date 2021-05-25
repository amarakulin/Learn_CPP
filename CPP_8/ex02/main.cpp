/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/24/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include "MutantStack.hpp"

template <class Colletion>
void printCollection(Colletion &c){
	typename Colletion::iterator it = c.begin();
	typename Colletion::iterator ite = c.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void testString(){
	MutantStack<std::string> mstack;
	mstack.push("Hello");
	mstack.push("as");
	mstack.push("tcyvbu");
	mstack.push("5.2");
	mstack.push("La");
	mstack.push("|");
	printCollection(mstack);
	std::cout << "Top -> " << mstack.top() << std::endl;
	std::cout << "Size -> " << mstack.size() << std::endl;
	std::stack<std::string> s(mstack);
	std::cout << "Size of copy-> " << s.size() << std::endl;
	std::cout << "Top of copy-> " << s.top() << std::endl;

}

void testFloat(){
	MutantStack<float> mstack;
	mstack.push(5.12);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5.2);
	mstack.push(737);
	mstack.push(.567);
	printCollection(mstack);
	std::cout << "Top -> " << mstack.top() << std::endl;
	std::cout << "Size -> " << mstack.size() << std::endl;
	std::stack<float> s(mstack);
	std::cout << "Size of copy-> " << s.size() << std::endl;
	std::cout << "Top of copy-> " << s.top() << std::endl;
}

int main()
{
	std::cout << "=================Subj test=================" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "Size of copy-> " << s.size() << std::endl;
	std::cout << "Top of copy-> " << s.top() << std::endl;

	std::cout << "=================My tests=================" << std::endl;
	std::cout << "=================test float=================" << std::endl;
	testFloat();
	std::cout << "=================test string=================" << std::endl;
	testString();
	return 0;
}
/* **************************************************************************** */
/*                                                                      .       */
/*   Pony.hpp                                                          / V\     */
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


#ifndef CPP_1_PONY_HPP
#define CPP_1_PONY_HPP

#include <iostream>


class Pony
{
private:
	int age;
	std::string name;
public:
	int getAge() const;
	void setAge(int age);
	const std::string &getName() const;
	void setName(const std::string &name);
	void lifeCyclePony(Pony *Pony);
	void ponyOnTheHeap();
	void ponyOnTheStack();
};


#endif //CPP_1_PONY_HPP

/* **************************************************************************** */
/*                                                                      .       */
/*   Otter.hpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/16/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_4_OTTER_HPP
#define CPP_4_OTTER_HPP

#include "Victim.hpp"

class Otter : virtual public Victim{
public:
	Otter();
	Otter(std::string name);
	Otter(Otter const &copy);
	Otter& operator=(const Otter &assign);
	~Otter();

private:
	void setParamConstructor(std::string name);

};

#endif

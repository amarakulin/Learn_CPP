/* **************************************************************************** */
/*                                                                      .       */
/*   Peon.hpp                                                        / V\     */
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


#ifndef CPP_4_PEON_HPP
#define CPP_4_PEON_HPP

#include "Victim.hpp"

class Peon : virtual public Victim{
public:
	Peon();
	Peon(std::string name);
	Peon(Peon const &copy);
	Peon& operator=(const Peon &assign);
	~Peon();

private:
	void setParamConstructor(std::string name);

};

#endif

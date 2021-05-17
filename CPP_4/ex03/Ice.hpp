/* **************************************************************************** */
/*                                                                      .       */
/*   Ice.hpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/17/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_4_ICE_HPP
#define CPP_4_ICE_HPP

#include "AMateria.hpp"

class Ice :  virtual public AMateria{
public:
	Ice();
	Ice(Ice const &copy);
	Ice& operator=(const Ice &assign);
	~Ice();

	std::string const & getType() const;
	unsigned int getXP() const;
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif
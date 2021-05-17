/* **************************************************************************** */
/*                                                                      .       */
/*   Cure.hpp                                                        / V\     */
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


#ifndef CPP_4_CURE_HPP
#define CPP_4_CURE_HPP

#include "AMateria.hpp"

class Cure : virtual public AMateria{
public:
	Cure();
	Cure(Cure const &copy);
	Cure& operator=(const Cure &assign);
	~Cure();

	std::string const & getType() const;
	unsigned int getXP() const;
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif
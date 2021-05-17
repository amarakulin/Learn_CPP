/* **************************************************************************** */
/*                                                                      .       */
/*   AMateria.hpp                                                      / V\     */
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


#pragma once

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();
	AMateria& operator=(const AMateria &assign);

	std::string const & getType() const;
	unsigned int getXP() const;
	void setType(const std::string &type);
	void setXp(unsigned int xp);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

private:
	std::string type;
	unsigned int _xp;
};


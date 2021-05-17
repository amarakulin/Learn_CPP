/* **************************************************************************** */
/*                                                                      .       */
/*   MateriaSource.hpp                                                        / V\     */
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


#ifndef CPP_4_MATERIASOURCE_HPP
#define CPP_4_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : virtual public IMateriaSource{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource& operator=(const MateriaSource &assign);
	~MateriaSource();

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);

private:
	AMateria *_materials[4];
	void deleteMaterials();

};


#endif
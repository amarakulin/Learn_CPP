/* **************************************************************************** */
/*                                                                      .       */
/*   Squad.cpp.cc                                                        / V\     */
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


#include "Squad.hpp"

Squad::Squad(){
	std::cout << "Create a Squad" << std::endl;

}

Squad::Squad(const Squad &copy){
	operator=(copy);
}

Squad &Squad::operator=(const Squad &assign){
	if (this != &assign){
		copyLst(assign.lstUnits);
	}
	return *this;
}

Squad::~Squad(){
	deleteLstUnit(this->lstUnits);
	std::cout << "Delete a squad" << std::endl;
}

int Squad::getCount() const{
	int count = 0;
	t_lstUnits *copy = this->lstUnits;

	if (copy == nullptr){
		return 0;
	}
	while(copy->next != nullptr){
		count++;
	}
	count++;
	return count;
}

ISpaceMarine *Squad::getUnit(int idxUnit) const
{
	int i = 0;
	t_lstUnits *copy = this->lstUnits;
	if (i >= getCount()){
		return nullptr;
	}
	while (i != idxUnit){
		copy = copy->next;
		i++;
	}
	return copy->unit;
}

t_lstUnits *Squad::lstNew(ISpaceMarine *unit){
	t_lstUnits *newUnit = new t_lstUnits();
	newUnit->unit = unit;
	newUnit->next = nullptr;
	return newUnit;
}

int Squad::push(ISpaceMarine *newUnit){
	t_lstUnits *copy = this->lstUnits;
	while(copy->next != nullptr){
		copy = copy->next;
	}
	copy->next = lstNew(newUnit);
	return 0;
}

void Squad::deleteLstUnit(t_lstUnits *lst){
	if (lst != nullptr){
		delete lst->unit;
		deleteLstUnit(lst->next);
		delete lst;
	}
}

void Squad::copyLst(t_lstUnits *lst){
	t_lstUnits *copy = lst;
	deleteLstUnit(this->lstUnits);
	while(copy){
		push(copy->unit);
		copy = copy->next;
	}
}



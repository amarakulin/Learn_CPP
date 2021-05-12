/* **************************************************************************** */
/*                                                                      .       */
/*   PhoneBook.hpp                                                     / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/10/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_0_PHONEBOOK_HPP
#define CPP_0_PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"
#include "Add.hpp"
#include "Search.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"                 /* Green */
#define BLUE    "\033[34m"                 /* Blue */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */

long getLongFromInput();
int getIntFromInput();


#endif

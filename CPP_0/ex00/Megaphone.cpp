/* **************************************************************************** */
/*                                                                      .       */
/*   Megaphone.cpp                                                     / V\     */
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

#include <string>
#include <iostream>

class Megaphone{
	public:
		void printStrUpperCase(std::string);
		void outputMegaphone(int, char **);

};

void Megaphone::printStrUpperCase(std::string strToPrint){
	if (strToPrint.empty()){
		std::string loudAnswer = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << loudAnswer;
	}
	else{
		for (int i = 0; strToPrint[i]; i++){
			std::cout <<  static_cast <char> (std::toupper(strToPrint[i]));
		}
	}
}

void Megaphone::outputMegaphone(int argc, char *argv[]){
	if (argc == 1)
		printStrUpperCase("");
	else{
		for (int i = 1; argv[i]; i++){
			printStrUpperCase(argv[i]);
		}
	}
	std::cout << "\n";
}

int main(int argc, char *argv[]){

	Megaphone megaphone;
	megaphone.outputMegaphone(argc, argv);
	return (0);
}
/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/22/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include <ostream>
#include "Include/whatever.hpp"

class A{
public:
	A(int n): _n(n){}
	bool operator==(A const & rhs) const {return (this->_n == rhs._n);}
	bool operator!=(A const & rhs) const {return (this->_n != rhs._n);}
	bool operator>(A const & rhs) const {return (this->_n > rhs._n);}
	bool operator<(A const & rhs) const {return (this->_n < rhs._n);}
	bool operator>=(A const & rhs) const {return (this->_n >= rhs._n);}
	bool operator<=(A const & rhs) const {return (this->_n <= rhs._n);}

	int getN() const{
		return _n;
	}

private:
	int _n;
};

std::ostream &operator<<(std::ostream &os, const A &a)
{
	os << "_n: " << a.getN();
	return os;
}

int main(){
	int a = 3;
	int b = 3;
	bool t = true;
	bool f = false;
	float f1 = 5.1114;
	float f2 = 5.1119;
	char ch1 = 'a';
	char ch2 = 'b';
	A a1(1);
	A a2(2);


	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;



	std::cout <<  std::endl << "=========MIN=========" << std::endl;
	std::cout << "min( t, f ) = " << ::min( t, f ) << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "min( ch1, ch2 ) = " << ::min( ch1, ch2 ) << std::endl;
	std::cout << "min( a1, a2 ) = " << ::min( a1, a2 ) << std::endl;


	std::cout <<  std::endl << "=========MAX=========" << std::endl;
	std::cout << "max( t, f ) = " << ::max( t, f ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;
	std::cout << "max( ch1, ch2 ) = " << ::max( ch1, ch2 ) << std::endl;
	std::cout << "max( a1, a2 ) = " << ::max( a1, a2 ) << std::endl;


	std::cout <<  std::endl << "=========SWAP=========" << std::endl;
	std::cout << "Before: t = " << t << ", f = " << f << std::endl;
	::swap(t, f);
	std::cout << "After: t = " << t << ", f = " << f << std::endl;
	std::cout << "Before: f1 = " << f1 << ", f2 = " << f2 << std::endl;
	::swap(f1, f2);
	std::cout << "After: f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "Before: ch1 = " << ch1 << ", ch2 = " << ch2 << std::endl;
	::swap(ch1, ch2);
	std::cout << "After: ch1 = " << ch1 << ", ch2 = " << ch2 << std::endl;

	std::cout << "Before: a1 = " << a1 << ", a2 = " << a2 << std::endl;
	::swap(a1, a2);
	std::cout << "After: a1 = " << a1 << ", a2 = " << a2 << std::endl;
	return (0);
}

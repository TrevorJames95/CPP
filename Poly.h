#include "std_lib_facilities.h"
#ifndef Poly 
#define Poly 
class Polynomial
{
	private:
		int a;
		int b;
		int c;
		int d;
	public:
		Polynomial();
		Polynomial(int, int, int, int);
		void Print();
		Polynomial Sub(Polynomial);
		Polynomial Add(Polynomial);
};
#endif 

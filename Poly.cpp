#include "Poly.h"
Polynomial::Polynomial()
{
   a = b = c = d = 0;
}
Polynomial::Polynomial(int a_, int b_, int c_, int d_)
{
   a = a_;
   b = b_;
   c = c_;
   d = d_;
}
Polynomial Polynomial::Add(Polynomial p2)
{
   Polynomial p(a+p2.a, b+p2.b, c+p2.c, d+p2.d);
   return p;
}
Polynomial Polynomial::Sub(Polynomial p2)
{
   Polynomial p(a-p2.a, b-p2.b, c-p2.c, d-p2.d);
   return p;
}
void Polynomial::Print()
{
   if(a != 0)
		cout << a << "x^3";
   if(b != 0)
        cout << " " << b << "x^2";
   if(c != 0)
        cout << " " << c << "x";
   if(d != 0)
        cout << " " << d;
   		cout << endl;              
}

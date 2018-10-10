// ************************************************************************************
// Trevor Latchana
// Program Description
// This program can either adds, subtract or multiple complex numbers. 
// ************************************************************************************

#include <iostream>
#include <stdlib.h>
#include <iomanip> 
#include <cmath>

using namespace std;

class Complex
{
	private:
		int a;
		int b;
	public:
		Complex();
		Complex(int,int);
		~Complex();
		
		void operator +(Complex);
		void operator -(Complex);
		void operator *(int x);
		
		int getA();
		int getB();
		
		friend ostream& operator << (ostream &, Complex &);
		friend istream& operator >> (istream &, Complex &);
};
//--------------------------------------------Definitions
Complex::Complex()
{
	a = b = 0;
}
Complex::Complex(int a_, int b_)
{
	a = a_;
	b = b_;
}
Complex::~Complex()
{
	
}
void Complex::operator +(Complex C2)
{
	a = a + C2.a;
	b = b + C2.b;
}
void Complex::operator -(Complex C2)
{
	a = a - C2.a;
	b = b - C2.b;
}
void Complex::operator *(int C)
{
	a = a*C;
	b = b*C;
}
int Complex::getA()
{
	return a;
}
int Complex::getB()
{
	return b;
}
//-----------------------------------------------------------

void Menu(Complex& C1, Complex& C2);

int main()
{
	Complex C1,C2;
	Menu(C1, C2);
	
	return 0;
}

void Menu(Complex& C1, Complex& C2)
{
	int MM;
	char oper;
	cout << "Select your operation: " << endl;
	cout << "1).Addition" << endl;
	cout << "2).Subtraction" << endl;
	cout << "3).Multiplication" << endl;
	cin >> oper;
	while(oper)
	{
		switch(oper)
		{
			case '1':
					cout << "Enter your first complex number: " << endl;
					cin >> C1;		
					cout << "Enter your  second complex number: " << endl;
					cin >> C2;
					C1+C2;	
					cout << C1 << endl;
					system("PAUSE");
					system("CLS");	
					break;	
			case '2':
					cout << "Enter your first complex number: " << endl;
					cin >> C1;		
					cout << "Enter your  second complex number: " << endl;
					cin >> C2;
					C1-C2;
					cout << C1 << endl; 
					system("PAUSE");
					system("CLS");	
					break;
			case '3':
					cout << "Enter your first complex number: " << endl;
					cin >> C1;		
					cout << "Enter the multiplication value: " << endl;
					cin >> MM;
					C1*MM;
					cout << C1 << endl;
					system("PAUSE");
					system("CLS");	
					break;	
					
			default: 
				cout << "You have enterted an invalid selection!" << endl;
				break;		
		}
	}
}

ostream& operator << (ostream & out, Complex &C1 )
{
	char sign = '-';
	if(C1.getB() > 0)
	{
		sign = '+';
	}
	out << C1.getA() << " " <<  sign << " " << abs(C1.getB()) << "i";
	return out;
}

istream& operator >> (istream & In, Complex &C1)
{
	char sign = '0';
	In >> setw(1) >> C1.a;
	In.ignore(1);
	In >> setw(1);
	In.ignore(1);
	In >> setw(1) >> C1.b;
	In.ignore(1);
	if(sign == '-')
	{
		C1.b *= -1;
	}
	return In;
}

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Fraction
{
	protected:
		int Num;
		int Denum;
		char oper;
	public:
		Fraction();
		Fraction(int Numer,int Denm);
		~Fraction();
		
		void Normalize(Fraction &F2);
		void Reducer();
		
		Fraction operator +(Fraction);
		Fraction operator -(Fraction);
		Fraction operator /(Fraction);
		Fraction operator *(Fraction);
		
		friend ostream& operator << (ostream &, Fraction &);
		friend istream& operator >> (istream &, Fraction &);
};
//--------------------------------------------------------------- Definitions
Fraction::Fraction()
{
	Num = 0;
	Denum = 1;
}

Fraction::Fraction(int Numer, int Denm)
{
	Num = Numer;
	Denum = Denm;
}

Fraction::~Fraction()
{
	
}

void Fraction::Normalize(Fraction &F2)
{
	Fraction X, Y;
	X.Num = (Num * F2.Denum);
	X.Denum = (Denum * F2.Denum);
	Y.Num = (F2.Num * Denum);
	Y.Denum = (F2.Denum * Denum); 
	Num = X.Num;
	Denum = X.Denum;
	F2 = Y;	
}

Fraction Fraction::operator +(Fraction F2)
{
	Fraction R;
	R.Num = Num + F2.Num;
	R.Denum = Denum; 	
	return R;
} 

Fraction Fraction::operator -(Fraction F2)
{
	Fraction R;
	R.Num = Num - F2.Num;
	R.Denum = F2.Denum;
	return R;
}

Fraction Fraction::operator /(Fraction F2)
{
	Fraction R;
	R.Num = Num * F2.Denum;
	R.Denum = Denum * F2.Num;
	return R;
}

Fraction Fraction::operator *(Fraction F2)
{
	Fraction R;
	R.Num = Num * F2.Num;
	R.Denum = Denum * F2.Denum;
	return R;
} 

class MixFractions::public Fractions
{
	private:
		int whole;
	public:
};

int main()
{
	char oper = '0';
	Fraction F1, F2;
	cin >> F1 >> F2;
	F1.Normalize(F2);
	F3 = F1 + F2;
	cout << F3;
	
	return 0;
}

istream& operator >> (istream & In, Fraction &F1)
{
	In >> setw(1) >> F1.Num;
	In.ignore(1);
	In >> setw(1) >> F1.Denum;
	In.ignore(1);
	
	return In;
}

ostream& operator << (ostream & out, Fraction &F1 )
{
	out << F1.Num << "/" << F1.Denum;
	
	return out;
}



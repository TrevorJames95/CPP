// ************************************************************************************
// Trevor Latchana
// Program Description
// This program will subtract or add two polynomials of degree 3.
// ************************************************************************************
#include "Poly.cpp"
void menu();
void input1();
void input2();

int main()
{
	Polynomial *p1 = new Polynomial;
	Polynomial *p2 = new Polynomial;
	
	menu();	
	
	delete p1;
	delete p2;
	return 0;	
}

void menu()
{
	char oper;
	cout << "Select operation" << endl;
	cout << "1. Add" << endl;
	cout << "2. Sub" << endl;
	cin >> oper;
	if(oper == '1')
	{
		input1();	
	}
	else if(oper == '2')
	{
		input2();
	}	
}
void input1()
{
	int a1,b1,c1,d1 = 0;
	int a2,b2,c2,d2 = 0;
	cout << "Coefficients of the first polynomial that is of degree 3: " << endl;
	cin >> a1 >> b1 >> c1 >> d1;
	Polynomial p1(a1, b1, c1, d1);
	cout << "Coefficients of the second polynomial that is of degree 3:" << endl;	
	cin >> a2 >> b2 >> c2 >> d2;
	Polynomial p2(a2, b2, c2, d2);
	Polynomial p3 = p1.Add(p2);
	p3.Print();
}
void input2()
{
	int a1,b1,c1,d1 = 0;
	int a2,b2,c2,d2 = 0;
	cout << "Coefficients of the first polynomial that is of degree 3: " << endl;
	cin >> a1 >> b1 >> c1 >> d1;
	Polynomial p1(a1, b1, c1, d1);
	cout << "Coefficients of the second polynomial that is of degree 3:" << endl;	
	cin >> a2 >> b2 >> c2 >> d2;
	Polynomial p2(a2, b2, c2, d2);
	Polynomial p3 = p1.Sub(p2);
	p3.Print();
}

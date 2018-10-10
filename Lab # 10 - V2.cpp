#include <iostream>
#include <cmath>
using namespace std;
class Polygon
{
	protected:
		double side;
	public:
		Polygon();
		Polygon(double S);
		virtual ~Polygon();
		virtual void setsides(double S);
		virtual void setsides2 (double Length, double Width);
		virtual void perimeter() = 0;
		virtual void area() = 0;
		virtual void center_of_gravity() = 0;
		
};
Polygon::Polygon()
{
	side = 1;
}
Polygon::Polygon(double S)
{
	side = S;
}
Polygon::~Polygon() { }
void Polygon::setsides(double S)  { side = S;}
void Polygon::perimeter(){ }
void Polygon::setsides2 (double Length, double Width) { } 
void Polygon::area() { }
void Polygon::center_of_gravity() { }

class Rectangle:public Polygon
{
	private:
		double L, W;
	public:
		Rectangle();
		Rectangle(double Length, double Width);
		virtual ~Rectangle();
		virtual void setsides2 (double Length, double Width); 
		virtual void perimeter();
		virtual void area();
		virtual void center_of_gravity();
};
Rectangle::Rectangle()
{
	L = 1;
	W = 1;
}
Rectangle::Rectangle(double Length, double Width)
{
	L = Length;
	W = Width;
}
Rectangle::~Rectangle()
{
	
}
void Rectangle::setsides2(double Length, double Width)
{
	L = Length;
	W = Width;
}
void Rectangle::perimeter()
{
	double P = 2*L + 2*W;
	cout << "The perimeter is: " << P << endl;
}
void Rectangle::area()
{
	double A = L * W ;
	cout << "The area is: " << A << endl;
}
void Rectangle::center_of_gravity()
{
	double C1 = L/2;
	double C2 = W/2;
	cout << "The center of gravity for the rectangle is: (" << C1 << "," << C2 << ")" << endl;	
}

class Square:public Polygon
{
	private:
		
	public:
		Square();
		Square(double S);
		virtual ~Square();
		virtual void setsides(double S);
		virtual void perimeter();
		virtual void area();
		virtual void center_of_gravity();
};
Square::Square()
{
	side = 1;
}
Square::Square(double S)
{
	side = S;
}
Square::~Square()
{
	
}
void Square::setsides(double S)
{
	side = S;
}
void Square::perimeter()
{
	double P = 4 * side;
	cout << "The perimeter of the square is: " << P << endl;
}
void Square::area()
{
	double A = side * side;
	cout << "The area of the square is: " << A << endl;
}
void Square::center_of_gravity()
{
	double C = side/2;
	cout << "The center of gravity for the square is: (" << C <<"," << C << ")" << endl;
}
class Pentagon:public Polygon
{
	private:
		
	public:
		Pentagon();
		Pentagon(double S);
		virtual ~Pentagon();
		virtual void setsides(double S);
		virtual void perimeter();
		virtual void area();
		virtual void center_of_gravity();
};
Pentagon::Pentagon()
{
	side = 1;
}
Pentagon::Pentagon(double S)
{
	side = S;
}
Pentagon::~Pentagon()
{
	
}
void Pentagon::setsides(double S)
{
	side = S;
}
void Pentagon::perimeter()
{
	double P = side * 5;
	cout << "The perimeter for the pentagon is: " << P << endl; 

}
void Pentagon::area()
{
	double M = tan(54);
	double A = (5*(side*side)*M)/4;
	cout << "The area of the pentagon is: " << A << endl;
}
void Pentagon::center_of_gravity()
{
	double C1 = side/2;
	double C2 = (side * tan(54))/2;
	cout << "The center of the pentagon is: (" << C1 << "," << C2 <<")" << endl;
}

class Hexagon:public Polygon
{
	private:
		
	public:
		Hexagon();
		Hexagon(double S);
		virtual ~Hexagon();
		virtual void setsides(double S);
		virtual void perimeter();
		virtual void area();
		virtual void center_of_gravity();
};
Hexagon::Hexagon()
{
	side = 1;
}
Hexagon::Hexagon(double S)
{
	side = S;
}
Hexagon::~Hexagon()
{
	
}
void Hexagon::setsides(double S)
{
	side = S;
}
void Hexagon::perimeter()
{
	double P = side * 6;
	cout << "The perimeter for the Hexagon is: " << P << endl; 

}
void Hexagon::area()
{
	double A = (3 * sqrt(3) * (side * side))/2;
	cout << "The area of the Hexagon is: " << A << endl;
}
void Hexagon::center_of_gravity()
{
	double C1 = side/2;
	double C2 = (sqrt(3)*side)/2;
	cout << "The center of the Hexagon is: (" << C1 << "," << C2 << ")" << endl; 
}

void Printmenu();
void ArrLoop(Polygon *Par[], int choice);

int main()
{
	Polygon *Par[4] = {new Rectangle(), new Square(), new Pentagon(), new Hexagon()};
	char M;
	double S, Length, Width;
	int choice = 0;
	Printmenu();
	cin >> M;
	switch(M)
		{
			case'1':
				cout << "Please enter the length and the width of the sides: " << endl;
				cin >> Length >> Width;
				Par[choice]->setsides2(Length, Width);
				ArrLoop(Par, choice);
				break;
			case'2':
				cout << "Please enter the length of the side: " << endl;
				cin >> S;
				choice = 1;
				Par[choice]->setsides(S);
				ArrLoop(Par, choice);
				
				break;
			case'3':
				cout << "Please enter the length of the side: " << endl;
				cin >> S;
				choice = 2;
				Par[choice]->setsides(S);
				ArrLoop(Par, choice);
				break;
			case'4':
				cout << "Please enter the length of the side: " << endl;
				cin >> S;
				choice = 3;
				Par[choice]->setsides(S);
				ArrLoop(Par, choice);
				break;
			default:
				cout << "Invalid selection!" << endl;
				break;
		}
	
	return 0;
}
void Printmenu()
{
	cout << "Select your shape" << endl;
	cout << "1. Rectangle. " << endl;
	cout << "2. Square. " << endl;
	cout << "3. Pentagon. " << endl;
	cout << "4. Hexagon. " << endl;
}

void ArrLoop(Polygon *Par[], int choice)
{
		Par[choice]->perimeter();
		Par[choice]->area();
		Par[choice]->center_of_gravity();
}

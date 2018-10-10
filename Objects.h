#include "std_lib_facilities.h"
class Cube
{
	private:
		double length;
	public:
		void setlength(double L);
		double getlength();
		double cube_vol();		
};

class Sphere
{
	private:
		double radius;
	public:
		void setradius(double R);
		double getradius();
		double sphere_vol();
};

class Cylinder
{
	private:
		double radius;
		double height;
	public:
		void setradius(double R);
		void setheight(double H);
		double getRadius();
		double getheight();
		double cylinder_vol();
};

// -------------------------------------Cube
void Cube::setlength(double L)
{
	length = L;
}

double Cube::getlength()
{
	return length;
}

double Cube::cube_vol()
{
	double cu_vol = length * length * length;
	return cu_vol;
}

//-----------------------------------Shere
void Sphere::setradius(double R)
{
	radius = R;
}

double Sphere::getradius()
{
	return radius;
}

double Sphere::sphere_vol()
{
	double s_vol = (4.0/3.0) * 3.14 * pow(radius,3);
	return s_vol;
}

//--------------------------------------Cylinder

void Cylinder::setradius(double R)
{
	radius = R;
}

double Cylinder::getRadius()
{
	return radius;
}

void Cylinder::setheight(double H)
{
	height = H;
}

double Cylinder::getheight()
{
	return height;
}

double Cylinder::cylinder_vol()
{
	double cy_vol =  3.14 * pow(radius,2) * height;
	return cy_vol;
}

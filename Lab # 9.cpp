// ************************************************************************************
// Trevor Latchana
// Program Description
// This program uses inheritance of class structures to find the cross and dot product of two vectors.
// ************************************************************************************
#include <iostream>
using namespace std;
class Vector2D
{
	protected:
		int x;
		int y;
	public:
		Vector2D();
		Vector2D(int x_, int y_);
		~Vector2D();
};
//----------------------------------------------

Vector2D::Vector2D()
{
	x = 0;
	y = 0;
}
Vector2D::Vector2D(int x_, int y_)
{
	x = x_;
	y = y_;
}
Vector2D::~Vector2D()
{
	
}
class Vector3D:public Vector2D
{
	private:
		int z;
	public:
		Vector3D();
		Vector3D(int x_, int y_, int z_);
		~Vector3D();
		void Cross(Vector3D);
		void Dot(Vector3D);	
};
//------------------------------------------
Vector3D::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector3D::Vector3D(int x_, int y_, int z_)
{
	x = x_;
	y = y_;
	z = z_;
}
Vector3D::~Vector3D()
{
	
}
void Vector3D::Dot(Vector3D V1)
{
	int m, a, b, c = 0;
	a = x*V1.x;
	b = y*V1.y;
	c = z*V1.z;
	m = a + b + c;
	cout << "The Dot product of two vectors is: " << m << endl;
}
void Vector3D::Cross(Vector3D V1)
{
	int a,b,c = 0;
	a = y*V1.z-z*V1.y;
	b = z*V1.x-x*V1.z;
	c = x*V1.y-y*V1.x;
	cout << "The Cross product of two vectors is:" << "(" << a << ")i+ (" << b << ")j+ (" << c <<")k"  << endl;
}

void input();
int main()
{
	bool flag = true;
	char Red;
	while(flag)
	{
		input();
		cout <<"Enter Y to continue or N to exit." << endl;
		cin >> Red;
		if(Red == 'N')
		{
			flag = false;
		}
		else if(Red == 'Y')
		{
			system("CLS");
		}
	}
	return 0;
}
void input()
{
	int a, b, c;
	int a_, b_, c_;
	cout << "Enter the values for the first vector: " << endl;
	cin >> a >> b >> c;
	cout << "Enter the values for the second vector" << endl;;
	cin >> a_ >> b_ >> c_;
	Vector3D V1(a,b,c);
	Vector3D V2(a_,b_,c_);
	V1.Cross(V2);
	V1.Dot(V2);
}

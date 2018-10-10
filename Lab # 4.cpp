// ************************************************************************************
// Trevor Latchana
// Program Description
// This program calculates the volume of either a cube, sphere or cylinder.
// ************************************************************************************
# include "Objects.h"

int main()
{
	Cube c;
	Sphere s;
	Cylinder cy;
	double L = 0;
	double R = 0;
	double H = 0;
	char shapechoice = 0;
	
	cout << "Please select your shape (a, b or c) :" << endl 
		 << "a) Cube" << endl
		 << "b) Sphere" << endl
	 	 << "c) Cylinder" << endl;
	cin >> shapechoice;

	switch (shapechoice)
	{
	
		case 'a':
				cout << "Enter the length: ";
				while(cin >> L)
				{
					if(L <= 0)
						{
							cout << "Invalid parameters please enter any number greater than zero."<< endl;
							cout << "Enter the length: ";
						}
					else
						{
							c.setlength(L);
							cout << "The volume of the cube is: " << c.cube_vol() << endl;
							cout << "Enter the length: " << endl;
						}
				}
				break;
		case 'b':
				cout << "Enter the radius: ";
				while(cin >> R)
				{
					if(R <= 0)
						{
							cout << "Invalid parameters please enter any number greater than zero."<< endl;
							cout << "Enter the length: ";
						}
					else
						{
							s.setradius(R);
							cout << "The volume of the sphere is: " << s.sphere_vol() << endl;
							cout << "Enter the radius: " << endl;
						}
				}
				break;
		case 'c':
				cout << "Enter the radius and the height: ";
				while(cin >> R >> H)
				{
					if(H <= 0)
						{
							cout << "Invalid parameters please enter any number greater than zero."<< endl;
							cout << "Enter the Heigth: ";
						}
					if(R <= 0)
						{
							cout << "Invalid parameters please enter any number greater than zero."<< endl;
							cout << "Enter the radius: ";
						}
					else
					{
						cy.setheight(H);
						cy.setradius(R);
						cout << "The volume of the cylinder is: " << cy.cylinder_vol() << endl;
						cout << "Enter the radius and the height: ";
					}
				}
				break;
		default: 
		cout << "You have enterted an invalid selection!" << endl
			 << "Please try again." << endl;
			 break;
	
	}
	return 0;
}



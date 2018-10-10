// ************************************************************************************
// Trevor Latchana
// 
// Program Description
// This program computers the distance between two points and calculates the slope.
// The program uses data structure along with the distance formula and slope formula.
//
// ************************************************************************************
# include "std_lib_facilities.h"
double dist_m(struct cords *p1);
double slope_m(struct cords *p1);

struct cords
{
	double x1,x2,y1,y2;
};

int main()
{
	cords *p1 = new cords;
	
	cout << "Please enter the first pair of coordinates: ";
	cin	 >> p1->x1 >> p1->y1;
	cout << "Please enter the second pair of coordinates: ";
	cin  >> p1->x2 >> p1->y2;
	
	if(p1->x1 == p1->x2)
	{
		cout << "The slope is a vertical line." << endl;	
		double distance = dist_m(p1);
		cout << "The distance between the two points is: " << distance << endl;
	}
	
	else
	{
	double distance = dist_m(p1);
	cout << "The distance between the two points is: " << distance << endl;		
	
	double slope    = slope_m(p1);
	cout << "The slope of the two points is: " << slope << endl;
	}
	delete p1;

	return 0;
}

double dist_m(struct cords *p1)
{
	double distancex   = (p1->x2 - p1->x1) * (p1->x2 - p1->x1);
	double distancey   = (p1->y2 - p1->y1) * (p1->y2 - p1->y1);
	double distance = sqrt(distancex + distancey); 
	return distance;
}

double slope_m(struct cords *p1)
{
	double y =  p1->y2 - p1->y1;
	double x =  p1->x2 - p1->x1;
	return y/x;
}

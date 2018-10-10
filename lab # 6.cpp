// ************************************************************************************
// Trevor Latchana
// Program Description
// This a program will find and print all the prime numbers up to a max number input by the user using classes.
// ************************************************************************************
#include "array.h"

int main()
{	
	int again;
	do
	{
		Prime P;
		P.getPrime();
		P.print();

    	cout << endl << "Do you want to go again?" << endl;
   	 	cout << "Enter 1 for yes and 0 for no: ";
    	cin >> again;
    	P.~Prime();
	}while (again != 0);
	
return 0;
}



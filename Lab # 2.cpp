// ************************************************************************************
// Trevor Latchana
// Program Description
// This program creates a file in the main directory of type data with R records.
// ************************************************************************************
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Data 
{ 
	int id; 
	char gender; 
	int credits;
};

int main()
{
	Data Records;
	int R;
	
	cout << "Please enter the number of records you would like to create: ";
	cin  >> R;
  	ofstream fout("Data.bin", ios::out);
	
	srand (time(NULL));	
	for(int inx = 1; inx <= R; inx++) 
	{
		Records.id = rand() % 1001;
		Records.gender = rand() % 2;
	   	{
	   		if(Records.gender == 0)
   			Records.gender = 'M';
   			if(Records.gender == 1)
   			Records.gender = 'F';
		}	
		Records.credits = rand() % 125;

		fout.write((char *)&Records, sizeof(Records));  
	}
fout.close();	

ifstream fin("Data.bin", ios::binary); 
 
cout << "Data file records " << endl; 
cout << "  ID             Gender        Credits " << endl; 
cout << "-------          ------        ------ "  << endl;

int sum = 0;
int numRecords = 0;
while(fin) 
{
	fin.read((char *)&Records, sizeof(Records)); 
	if(fin)
	{
		cout << setw(5) << Records.id << setw(15) << Records.gender << setw(15) << Records.credits <<setw(5) << endl; 
		numRecords++;
    	sum += Records.credits;
	}
} 
	cout <<"The file data.bin processed " << R << " records and the average number of credits is " << ((double)sum/numRecords);
	fin.close();
	return 0;	
}


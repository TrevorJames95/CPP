// ************************************************************************************
// Trevor Latchana
// Program Description
// This program accepts a text file from the command line in order to compute single variable statistics. 
// ************************************************************************************
#include "std_lib_facilities.h"
double standardDeviation(vector<double> v);
double average(vector<double> v);

int main(int argc, char * argv[])
{
	double number;
	vector<double> v;
	ifstream tFile (argv[1]);
	tFile.open(argv[1]);
	if (tFile.is_open())
	{
		while(tFile)
		{
			tFile >> number;
			v.push_back(number);
			if(tFile.eof())
			break;
		}	
		tFile.close();
	}
	else cout << "Unable to open file";

	cout << "Contents of file: "<< endl;
	
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
		if(i % 10  == 0)
		cout << endl;
	}
		double mean = average(v);
		double sd = standardDeviation(v);
		cout << endl;
		cout << "Mean: " << mean << endl;
		cout << "Standard Deviation: " << sd << endl;
	return 0;
}

double average(vector<double> v)
{
	double mean = 0;
	for (int i = 0; i < v.size(); ++i)
	mean = mean + v[i];
	return mean/v.size();
}

double standardDeviation(vector<double> v)
{
	double sd;
	double mean = average(v);

	for(int i = 0; i < v.size(); ++i)
	sd = sd + pow(v[i] - mean, 2);

return sqrt(sd/v.size());
}



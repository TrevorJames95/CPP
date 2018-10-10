#include "std_lib_facilities.h"

class Prime
{	
	private:
		int *PNUM;
		int max;
		int ai;
	
	public:
		Prime();
		Prime(int);
		~Prime();
		void print();
		void getPrime();
};

Prime::Prime()
{
	PNUM = new int[0];
}

Prime::Prime(int max)
{
	PNUM = new int[ai];
}

Prime::~Prime()
{
	delete []PNUM;
}
	
void Prime::getPrime()
{
	int start = 0;
	int flag;

	cout << "Please enter a integer less than 5,000: ";
	cin  >> max;
	

	
	while (start < max)
    {
        flag = 0;
		int i;
        for(i = 2; i <= start/2; ++i)
        {
            if(start % i == 0)
            {
                flag = 1;
            }
        }

        if (flag == 0)
        	{
        		PNUM[ai] = start;
				++ai;
			}
        
        	++start;
        
    }
	
}

void Prime::print()
{
	cout << endl;
	if(ai>100)
	{
		int endlcounter = 0;
		for(int k=ai-1; k>ai-101; k--)
		{
			
			cout << std::setw(5) << PNUM[k];
			endlcounter++;
			if(endlcounter%10 == 0)
			{
   			cout << endl;
   			}
		}
	}else	
	{
		for(int k=0; k<ai; k++)
		{
  			cout << PNUM[k] << std::setw(5);
    		if(k%10 == 0)
			{
   				cout << endl;
   			}
    	}
	}	
}


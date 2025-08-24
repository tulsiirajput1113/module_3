#include <iostream>
using namespace std;
class star
{
	public:
		int rows;
		void printinfo()
		{
			cout << "Enter number of rows: ";
		    cin >> rows;
		
		    for (int i = 1; i <= rows; i++) 
			{          
		        for (int j = 1; j <= i; j++) 
				{         
		            cout << "*";
		        }
		        cout << endl;  
		    }

		}
};
int main() 
{
    star s;
    s.printinfo();
    return 0;
}


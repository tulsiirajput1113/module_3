#include<iostream>
using namespace std;
class matrix
{
	public:
		int A[2][2], B[2][2],C[2][2];
		void getinfo()
		{
			cout << "Enter first matrix:\n";
    		for (int i = 0; i < 2; i++) 
			{
        		for (int j = 0; j < 2; j++) 
				{
            		cin >> A[i][j];
        		}
    		}

    		cout << "Enter second matrix:\n";
    		for (int i = 0; i < 2; i++) 
			{
        		for (int j = 0; j < 2; j++) 
				{
            		cin >> B[i][j];
        		}
    		}

    		for (int i = 0; i < 2; i++) 
			{
        		for (int j = 0; j < 2; j++) 
				{
            		C[i][j] = A[i][j] + B[i][j];
        		}
    		}

    		cout << "Result of Matrix Addition:\n";
   			for (int i = 0; i < 2; i++) 
			{
        		for (int j = 0; j < 2; j++) 
				{
            		cout << C[i][j] << " ";
        		}
        		cout << endl;
    		}
		}
};
int main() 
{
    matrix m;
    m.getinfo();

    return 0;
}


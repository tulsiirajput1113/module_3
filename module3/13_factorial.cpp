#include <iostream>
using namespace std;
class fact
{
	public:
		int n;
		int factorial(int n) 
		{
    		if (n == 0 || n == 1)   
        		return 1;
    		else
        		return n * factorial(n - 1); 
		}
		void display()
		{
			cout << "Enter a number: ";
		    cin >> n;
		    cout << "Factorial of " << n << " = " << factorial(n) << endl;
		}
};
int main() 
{
    fact f;
    f.display();
    return 0;
}


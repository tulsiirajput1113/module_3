#include <iostream>
using namespace std;
class Calculator 
{
	public:
		int a, b;
		void getdata()
		{
	    	cout << "Enter two numbers: ";
	    	cin >> a >> b;
		}
	    int add(int a, int b)
		{
	        return a + b;
	    }
	
	    int sub(int a, int b) 
		{
	        return a - b;
	    }
	
	    int mul(int a, int b) 
		{
	        return a * b;
	    }
	
	    int div(int a, int b) 
		{
	        return a / b;
	    }
	    void display()
	    {
	    	cout << "Add = " <<add(a, b) << endl;
    		cout << "Sub = " <<sub(a, b) << endl;
    		cout << "Mul = " <<mul(a, b) << endl;
    		cout << "Div = " <<div(a, b) << endl;
		}
};

int main() 
{
    Calculator c; 
	c.getdata();  
    c.display();

    return 0;
}


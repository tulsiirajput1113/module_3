#include <iostream>
using namespace std;
class operat
{
	public:
		int a,b;
		void getinfo()
		{
			cout<<"enter number of a:";
			cin>>a;
			cout<<"enter number of b:";
			cin>>b;
			// Arithmetic Operators
		    cout << "Arithmetic Operators:" << endl;
		    cout << "a + b = " << (a + b) << endl;
		    cout << "a - b = " << (a - b) << endl;
		    cout << "a * b = " << (a * b) << endl;
		    cout << "a / b = " << (a / b) << endl;
		    cout << "a % b = " << (a % b) << endl;
		
		    // Relational Operators
		    cout<<endl;
		    cout << "Relational Operators:" << endl;
		    cout << "a == b: " << (a == b) << endl;
		    cout << "a != b: " << (a != b) << endl;
		    cout << "a > b: " << (a > b) << endl;
		    cout << "a < b: " << (a < b) << endl;
		    cout << "a >= b: " << (a >= b) << endl;
		    cout << "a <= b: " << (a <= b) << endl;
		
		    // Logical Operators
		    cout<<endl;
		    cout << "Logical Operators:" << endl;
		    cout << "And : " << (a>0 && b>0) << endl;
		    cout << "or: " << (a>0 || b>0) << endl;
		    cout << "Not: " << !(a>0) << endl;
		}
};
int main() 
{
	operat o;
	o.getinfo();   
    return 0;
}


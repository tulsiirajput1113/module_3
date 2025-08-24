#include <iostream>
using namespace std;
int globalVar = 10;
class A
{
	public:
		int localVar =20;
		void showVariables()
		{
		    cout << "Inside show function:" << endl;
		    cout << "Global Variable = " << globalVar << endl;
		    cout << "Local Variable = " << localVar << endl;
		}
};

int main() 
{
	A a1;
	a1.showVariables();
    cout << "Inside main function:" << endl;
    cout << "Global Variable = " << globalVar << endl;
    cout<<endl;
    // cout << localVar;  //  show error

    return 0;
}

